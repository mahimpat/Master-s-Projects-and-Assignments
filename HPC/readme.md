## COM 6012 (Scalable Machine Learning)


### Assignment 1 (Sentiment Analysis with Logistic Regression)
```markdown
**The goal of this assignment is to develop and test a text classification system for sentiment analysis, in particular to predict the sentiment of movie reviews, i.e. positive or negative (binary classification).**
For that purpose, you will implement:
- Text processing methods for extracting Bag-Of-Word features, using n-grams (BOW), i.e. unigrams, bigrams and trigrams to obtain vector representations of documents where n=1,2,3 respectively. Two vector weighting schemes should be tested: (1) raw frequencies (1 mark); (2) tf.idf (1 mark). 
- character n-grams (BOCN). A character n-gram is a contiguous sequence of characters given a word, e.g. for n=2, 'coffee' is split into {'co', 'of', 'ff', 'fe', 'ee'}. Two vector weighting schemes should be tested: (1) raw frequencies (1 mark); (2) tf.idf (1 mark). Tip: Note the large vocabulary size!
- a combination of the two vector spaces (n-grams and character n-grams) choosing your best performing wighting respectively (i.e. raw or tfidf). (1 mark) Tip: you should merge the two representations
- Binary Logistic Regression (LR) classifiers that will be able to accurately classify movie reviews trained with:
  1. BOW-count (raw frequencies) 
  2. BOW-tfidf (tf.idf weighted)
  3. BOCN-count
  4. BOCN-tfidf
  5. BOW+BOCN (best performing weighting; raw or tfidf)
- The Stochastic Gradient Descent (SGD) algorithm to estimate the parameters of your Logistic Regression models. Your SGD algorithm should:
  1. Minimise the Binary Cross-entropy loss function (1 mark)
  2. Use L2 regularisation (1 mark)
  3. Perform multiple passes (epochs) over the training data (1 mark)
  4. Randomise the order of training data after each pass (1 mark)
  5. Stop training if the difference between the current and previous development loss is smaller than a threshold (1 mark)
  6. After each epoch print the training and development loss (1 mark)
- Discuss how did you choose hyperparameters (e.g. learning rate and regularisation strength) for each LR model? You should use a table showing model performance using different set of hyperparameter values. (2 marks). Tip: Instead of using all possible combinations, you could perform a random sampling of combinations.**
- After training each LR model, plot the learning process (i.e. training and validation loss in each epoch) using a line plot. Does your model underfit, overfit or is it about right? Explain why. (1 mark).
- Identify and show the most important features (model interpretability) for each class (i.e. top-10 most positive and top-10 negative weights). Give the top 10 for each class and comment on whether they make sense (if they don't you might have a bug!). If you were to apply the classifier into a different domain such laptop reviews or restaurant reviews, do you think these features would generalise well? Can you propose what features the classifier could pick up as important in the new domain? (2 marks)
- Provide well documented and commented code describing all of your choices. In general, you are free to make decisions about text processing (e.g. punctuation, numbers, vocabulary size) and hyperparameter values. We expect to see justifications and discussion for all of your choices (2 marks).
- Provide efficient solutions by using Numpy arrays when possible (you can find tips in Lab 1 sheet). Executing the whole notebook with your code should not take more than 5 minutes on a any standard computer (e.g. Intel Core i5 CPU, 8 or 16GB RAM) excluding hyperparameter tuning runs (2 marks).
```
### Assignment 2 (Log Mining and Analysis & Movie Recommendation and Analysis)
```markdown

**Question 1. Log Mining and Analysis [15 marks]**
You need to finish Lab 1 and Lab 2 before solving this question.
Data: Use wget to download the NASA access log July 1995 data (using the hyperlink ftp://ita.ee.lbl.gov/traces/NASA_access_log_Jul95.gz) to the “Data” folder. The data description is the same as in Lab 2 Task 4 Question 1 so please review it to understand the data before completing the four tasks below.  
-Find out the maximum number and minimum number of requests on each of the seven days in a week (i.e., Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday) during July 1995. You need to report 14 numbers, one max number and one min number for each day of the week. Hint: see pyspark sql API related to data format. [4 marks]
-Visualise the 14 numbers in A above in ONE figure to help gain insights from them [2 marks]
-Find out the 12 most requested and 12 least requested .mpg videos. Report the video file name, e.g. abc.mpg, and the total number of requests for each of these 24 videos during July 1995. [4 marks]
-Visualise the 24 total request numbers in C as ONE figure to help gain insights from them [2 marks] 
-Discuss two most interesting observations from A to D above, each with three sentences: 1) What is the observation? 2) What are the possible causes of the observation? 3) How useful is this observation to NASA? [2 marks]
-Your report must be clearly written and your code must be well documented so that it is clear what each step is doing. [1 mark]

**Question 2. Movie Recommendation and Analysis [15 marks]** 
You need to finish Lab 7 and Lab 8 before solving this question. 
Data: Use wget to download the MovieLens 25M Dataset to the “Data” folder and unzip there. Please read the dataset description to understand the data before completing the following tasks.
-Perform a five-fold cross validation of ALS-based recommendation on the rating data ratings.csv with two versions of ALS to compare: one with the ALS setting used in Lab 7 notebook, and another different setting decided by you with a brief explanation of why. For each split, find the top 10% users in the training set who have rated the most movies, calling them as HotUsers, and the bottom 10% users in the training set who have rated the least movies (but rated at least one movie), calling them CoolUsers. Compute the Root Mean Square Error (RMSE) on the test set for the HotUsers and CoolUsers separately, for each of the FIVE splits and each ALS version. Put these RMSE results in one Table in the report (2 versions x 5 splits x 2 user groups = 20 numbers in total). Visualise these 20 numbers in ONE single figure. [6 marks]
-After ALS, each movie is modelled with some factors. Use k-means with k=10 to cluster the movie factors (hint: see itemFactors in ALS API) learned with the ALS setting in Lab 7 notebook in A for each of the five splits. Note that each movie is associated with several tags. For each of the five splits, find the top tag (with the most movies) and bottom tag (with the least movies, if there are ties, randomly pick one from them) for the top two largest clusters (i.e., 4 tags in total for each split). For each cluster and each split, report the two tags (one top one bottom) in one table (so 2 clusters x 5 splits x 2 tags = 20 tags to report in total). You can use any information provided by the dataset to answer the question. [6 marks]
-Discuss two most interesting observations from A & B above, each with three sentences: 1) What is the observation? 2) What are the possible causes of the observation? 3) How useful is this observation to a movie website such as Netflix? [2 marks]
    Your report must be clearly written and your code must be well documented so that it is clear what each step is doing. [1 mark]

```

