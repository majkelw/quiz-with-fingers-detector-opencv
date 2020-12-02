#include "Question.h"
#include <string>

void Question::setQuestion(wstring question) {
	this->question = question;
}

void Question::setCorrectAnswer(int correct) {
	this->correctAnswer = correct+1;
}
void Question::setAnswers(vector < wstring > answers) {
	this->answers = answers;
}

wstring Question::getQuestion() {
	return this->question;
}

vector < wstring > Question::getAnswers() {
	return this->answers;
}

int Question::getCorrectAnswer() {
	return this->correctAnswer;
}

void Question::compareAnswers(wstring correctAnswer) {

	for (int i = 0; i < answers.size(); i++) {
		if (correctAnswer == answers.at(i)) {
			setCorrectAnswer(i);
			break;
		}
	}
}

void Question::print() {

	wcout << question << "\n";

	for (int i = 0; i < answers.size(); i++) {

		wcout << i + 1 << ") " << answers.at(i) << endl;
	}
	cout << "\n";


}

wstring Question::getCorrectAnswerName() {
	return answers.at(correctAnswer);
}


void Question::setCorrectAnswerName(wstring correctAnswerName) {
	this->correctAnswerName = correctAnswerName;
}

void Question::mixAnswers() {
	srand(unsigned(time(NULL)));
	random_shuffle(answers.begin(), answers.end());
}



