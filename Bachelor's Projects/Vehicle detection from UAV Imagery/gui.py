
import sys
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from skimage.io import imread,imsave
from yolo_opencv import *
import os 
from sklearn.externals import joblib
global output=NULL


class VehicleDetector(QWidget):
    
    def __init__(self):
        super().__init__()
        self.setStyleSheet("background-color:#f3e5f5;\
        color:#f44336")
        self.input_image_label = QLabel("Input Image")
        self.processed_image_label = QLabel("Segmented Image")
        self.input_image_path = ''
 
        
        self.initUI()
        

      
    def initUI(self):      

        hbox = QHBoxLayout()
        button_box = QHBoxLayout()
        self.image_upload_button = QPushButton("Choose Image")
        self.image_upload_button.clicked.connect(self.get_image_file)
        self.image_upload_button.setStyleSheet("font-size:20px;background-color:#9c27b0;\
        border: 2px solid #222222;padding:5px;color:#ffffff")
        self.input_image = QLabel()
        self.processed_image = QLabel()
        self.l1 = QLabel()
       
        


        self.input_image_frame = QFrame(self)
        self.input_image_frame.setFrameShape(QFrame.StyledPanel)
        self.input_image_frame.setStyleSheet("font-size:20px;background-color:#222222;\
        border: 2px solid #ffffee;color:#ffffff")
        self.build_input_image_box(self.input_image_frame, "Input Image")
 
        self.processed_image_frame = QFrame(self)
        self.processed_image_frame.setFrameShape(QFrame.StyledPanel)
        self.processed_image_frame.setStyleSheet("font-size:20px;background-color:#222222;\
        border: 2px solid #ffffee;color:#ffffff")
        self.build_processed_image_box(self.processed_image_frame, "Final")


        bottom = QFrame(self)
        bottom.setFrameShape(QFrame.StyledPanel)
        bottom.setLayout(button_box)
        #button_box.addStretch(1)
        button_box.addWidget(self.image_upload_button)

        splitter1 = QSplitter(Qt.Horizontal)
        splitter1.addWidget(self.input_image_frame)
        splitter1.addWidget(self.processed_image_frame)


        splitter2 = QSplitter(Qt.Vertical)
        splitter2.addWidget(splitter1)
        splitter2.addWidget(bottom)

        hbox.addWidget(splitter2)
        self.setLayout(hbox)
        QApplication.setStyle(QStyleFactory.create('Cleanlooks'))
        
        self.setGeometry(300, 300, 300, 200)
        self.setWindowTitle('Vehicle Detector')
        self.show()

    def build_processed_image_box(self, frame, img_filename=None, label_text="processed image"):
        self.processed_image_label.setPixmap(QPixmap(img_filename))
        vbox = QVBoxLayout()
        vbox.addWidget(QLabel(label_text))
        vbox.addWidget(self.processed_image_label)
        vbox.addStretch()
        vbox.addWidget(self.l1)
        frame.setLayout(vbox)
        self.l1.setText("vehicle count =", output)
        self.l1.setAlignment(Qt.AlignRight)
        

    def build_input_image_box(self, frame,label_text="input image"):
        self.input_image_label.setPixmap(QPixmap(self.input_image_path))
        vbox = QVBoxLayout()
        vbox.addWidget(QLabel(label_text))
        vbox.addWidget(self.input_image_label)
        frame.setLayout(vbox)


    def load_processed_image(self, image):
        image = QImage(image, image.shape[1],
        image.shape[0], image.shape[1] * 3,QImage.Format_RGB888)
        pixmap = QPixmap(image)
        pixmap = pixmap.scaled(400,400)
        self.processed_image_label.setPixmap(pixmap)


    def process_image(self):
        prediction_image = process_image(self.input_image_path)
        self.load_processed_image(prediction_image)
        output=outp
        

    def get_image_file(self):
        self.input_image_path = QFileDialog.getOpenFileName(self, 'Select an image', os.path.join(os.getcwd(),"images"))[0]
        
        # if fileName:
        pixmap = QPixmap(self.input_image_path)
        pixmap = pixmap.scaled(400,400)
        self.input_image_label.setPixmap(pixmap)
        self.process_image()

        
def main():
    
    app = QApplication(sys.argv)
    ex = VehicleDetector()
    sys.exit(app.exec_())


if __name__ == '__main__':
    main()   
