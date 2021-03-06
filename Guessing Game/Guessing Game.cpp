// Guessing Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

namespace {
	int s_playersScore = 0;
	const int s_numQuestions = 10;
	const char* s_winMessage = "Correct!\n";
	const char* s_loseMessage = "Incorrect, the correct answer was ";
	const char* s_promptAnswer = "What is your answer?\n";
}


int main(int argc, char *argv[])
{
	int count = 1;
	int guess;
	int optionNumber = 1;
	string m_question[10];
	string m_questions[] = { "What gender is more vunrable to accidents? ", "Is it rape if both of you cry? ", "How much water does the brain consist off?",
							 "In what year did WW1 (World War One) take place? ", "What's the longest motorway in Britain ?", "Do goldfish really have a memory of three seconds? "
							 "Which animal is known to kill more people than plane crashes? ", "What is the tiny plastic covering of the tip of a shoelace called? ",
							 "What is the world's most popular first name?", "Which Hollywood movie showed the first toilet flush? " };

	string m_options[10][6] = { { "Male", "Female" }, { "Yes", "No" }, { "10%", "15%", "55%", "85%", "80%" }, {"1920", "1926", "1914", "1922" },
								 {"M1", "M5", "M6", "M42", "M40"}, {"Yes", "No" }, {"Sheep", "Dears", "Donkey", "Gorilla", "Zeebra"}, {"Aglet", "Blist", "Top", "Arch"},
								 {"Bil", "Ali", "Harry", "Ben", "Muhammad", "Steave"}, {"Phyco", "Scream", "Gone with the Wind", "Casablanca"} };
	int m_answer[10][1] = { {0},{1},{4},{2},{2},{1},{2},{0},{4},{0} };

	cout << "---------------------------------" << endl;
	cout << "       Welcome to the quiz" << endl;
	cout << "---------------------------------" << endl;
	cout << endl;
	cout << "At the end of the quiz, a results page will be shown?" << endl;
	cout << "To select an answer, enter the number from the following answers" << endl;
	cout << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << endl;
	while (s_numQuestions != 0)
	{
		cout << "Question " << count << ":  ";
		for (int i = 0; i < m_questions->length(); i++)
		{
			cout << m_questions[i] << endl;
			for (int j = 0; j < 6; j++)
			{
				if (m_options[i][j] != "")
				{
					cout << "Option " << optionNumber << ": " << m_options[i][j] << endl;
				}
			}

			cout << "What is your answer: ";
			cin >> guess;

			if (guess == (int)m_answer[i] + 1)
			{
				cout << s_winMessage << endl;

				s_playersScore = s_playersScore + 1;
			}
			else
			{
				cout << s_loseMessage << m_options[i][(int)m_answer[i] + 1];
			}

		}
	}


	return 0;
}

