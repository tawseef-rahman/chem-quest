#include "vsepr.h"
#include "elements.h"
#include "polyatomic_ions.h"
#include "amino_acids.h"
#include <iostream>
#include <algorithm>
#include <random>

void shuffleQuestions(std::vector<std::string> &questions)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(questions.begin(), questions.end(), gen);
}

std::vector<std::string> getShuffledOptions(const std::vector<std::string> &options, const std::string &correctAnswer)
{
    std::vector<std::string> shuffledOptions = options;
    if (std::find(shuffledOptions.begin(), shuffledOptions.end(), correctAnswer) == shuffledOptions.end())
    {
        shuffledOptions.push_back(correctAnswer);
    }
    shuffleQuestions(shuffledOptions);
    return shuffledOptions;
}

bool askMultipleChoiceQuestion(const std::string &question, const std::vector<std::string> &options, const std::string &correctAnswer)
{
    std::vector<std::string> shuffledOptions = getShuffledOptions(options, correctAnswer);

    std::cout << question << "\n";
    char choiceLetter = 'a';
    for (const auto &option : shuffledOptions)
    {
        std::cout << choiceLetter << ". " << option << "\n";
        choiceLetter++;
    }

    std::cout << "> ";
    std::string userAnswer;
    std::getline(std::cin, userAnswer);

    auto it = std::find(shuffledOptions.begin(), shuffledOptions.end(), correctAnswer);
    int correctIndex = std::distance(shuffledOptions.begin(), it);
    char correctChoice = 'a' + correctIndex;

    if (userAnswer == std::string(1, correctChoice))
    {
        std::cout << "Correct!\n";
        return true;
    }
    else
    {
        std::cout << "Wrong! The correct answer was: " << correctChoice << ". " << correctAnswer << "\n";
        return false;
    }
}

bool compareIgnoreCase(const std::string &str1, const std::string &str2)
{
    return std::equal(str1.begin(), str1.end(), str2.begin(), str2.end(), [](char a, char b)
                      { return tolower(a) == tolower(b); });
}