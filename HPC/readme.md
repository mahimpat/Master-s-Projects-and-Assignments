## COM 6012 (Scalable Machine Learning)


### Assignment 1 (Scalable supervised learning to study the Vulnerability of Resource-Constraint Internet of Things)
```markdown
**Scalable supervised learning to study the Vulnerability of
Resource-Constraint Internet of Things.**
You will apply Random Forests, Logistic Regression (including regularisation) and (shallow)
Neural networks over a subset of the dataset and over the full dataset. As performance
measures use classification accuracy.
1. Working with a subset of the larger dataset. Use pipelines and cross-validation to find the
best configuration of parameters for each model [8 marks]
a. For finding the best configuration of parameters, use 1% of the data chosen
randomly from the training set [2 marks]
b. Use a sensible grid for the parameters (for example, at least the three most relevant
parameters with at least three options for each parameter) for each predictive
model:
i. Pipeline and cross-validation for random forests [2 marks]
ii. Pipeline and cross-validation for logistic regression [2 marks]
iii. Pipeline and cross-validation for neural networks [2 marks]
Please, use the batch mode to work on this. Although the dataset is not as large, the
batch mode allows queueing jobs and for the cluster to better allocate resources.
2. Working with the larger dataset. Once you have found the best parameter configurations
for each algorithm in the smaller subset of the data, use the full dataset to train on the
whole training data and compare the performance of the three algorithms on the test data
[8 marks]
a. Use the best parameters found for each model in the smaller dataset of the
previous step, for the models used in this step. You need to pass these parameters
programmatically. Do not hard-code them. [2 marks]
b. Provide accuracy, area under the curve, training time and testing time when using
five CORES and ten CORES for each of the predictive models using
train_5xor_128dim.csv for training and test_5xor_128dim.csv for testing.
i. Five and ten cores results for random forests [2 marks]
ii. Five and ten cores results for logistic regression [2 marks]
iii. Five and ten cores results for neural networks [2 marks]
Remember to use the batch mode to work on this.
3. Discuss at least four observations (e.g., anything interesting), with two to three sentences
for each observation. If you need to, you can run additional experiments that help you to
provide these observations [4 marks] (one mark per observation)

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

