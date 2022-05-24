## Welcome to NLP repository

## COM 6513


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
### Assignment 2 (Topic Classification with a Feedforward Network)
```

For more details see [Basic writing and formatting syntax](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/mahimpat/Master-s-Projects-and-Assignments/settings/pages). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out.
