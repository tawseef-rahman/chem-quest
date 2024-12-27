#ifndef COMMON_FUNCTIONS_H
#define COMMON_FUNCTIONS_H

#include <string>
#include <vector>

// Shuffle the questions randomly
void shuffleQuestions(std::vector<std::string> &questions);

// Get shuffled options with the correct answer included
std::vector<std::string> getShuffledOptions(const std::vector<std::string> &options, const std::string &correctAnswer);

// Ask a multiple choice question and return true if the answer is correct, false otherwise
bool askMultipleChoiceQuestion(const std::string &question, const std::vector<std::string> &options, const std::string &correctAnswer);

// Compare two strings ignoring case sensitivity
bool compareIgnoreCase(const std::string &str1, const std::string &str2);

#endif // COMMON_FUNCTIONS_H