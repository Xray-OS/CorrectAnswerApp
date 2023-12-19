#include <iostream>

using namespace std;

struct Question
{
	string questionText;
	string answer[3];
	int correctAnswer = NULL;
};

bool correctAnswer(int correct)
{
	int answer;
	cout << "Choose between 1-3: ";

	cin >> answer;

	while (answer < 1 || answer > 3)
	{
		cout << "Invalid option, please choose between 1-3: ";
		cin >> answer;
	}

	if (answer == correct)
	{
		cout << "Correct!, you scored 1 point" << endl << endl;

		return true;
	}
	else
	{
		cout << "Incorrect!, no points scored" << endl << endl;

		return false;
	}
}

bool question(Question questionNumber)
{
	cout << questionNumber.questionText << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << questionNumber.answer[i] << endl;
	}

	return correctAnswer(questionNumber.correctAnswer);
}

int main()
{
	int score = 0;

	Question question1;
	question1.questionText = "What is the smallest country?";
	question1.answer[0] = "1. USA";
	question1.answer[1] = "2. India";
	question1.answer[2] = "3. Vatican City";
	question1.correctAnswer = 3;

	Question question2;
	question2.questionText = "What's the biggest animal in the world?";
	question2.answer[0] = "1. Elephant";
	question2.answer[1] = "2. Blue whale";
	question2.answer[2] = "3. Great white shark";
	question2.correctAnswer = 2;

	Question question3;
	question3.questionText = "How many elements are there in the periodic table?";
	question3.answer[0] = "1. 118 elements";
	question3.answer[1] = "2. 119 elements";
	question3.answer[2] = "3. 120 elements";
	question3.correctAnswer = 1;

	Question question4;
	question4.questionText = "Who is the main antagonist in GTA San Andreas?";
	question4.answer[0] = "1. Ryder";
	question4.answer[1] = "2. Jizzy";
	question4.answer[2] = "3. Frank Tenpenny";
	question4.correctAnswer = 3;

	Question question5;
	question5.questionText = "What is the main programming language that Unreal Engine uses?";
	question5.answer[0] = "1. Java Script";
	question5.answer[1] = "2. C++";
	question5.answer[2] = "3. Shell";
	question5.correctAnswer = 2;

	score += question(question1);
	score += question(question2);
	score += question(question3);
	score += question(question4);
	score += question(question5);

    if(score < 5 && score > 2)
    {
        cout << "Your score is: " << score << "/5" << endl;
    }
    else if(score < 2)
    {
        cout << "Your score is terrible, shame on you, go and crack some books kid!" << endl;
    }
	else if(score == 5)
    {
        cout << "Congratulations you scored the maximum amount of pints, your score is: " << score << endl;
    }

	return 0;
}