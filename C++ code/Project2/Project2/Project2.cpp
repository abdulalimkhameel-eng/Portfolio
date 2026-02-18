#include <iostream>
#include <string>
using namespace std;

void congrats() {
	cout << "Congrats, you got it correct!\n";
}



void boos() {
	cout << "OOPS, you got that wrong\n";
}



struct questions {
	string question;
	string answer;
	string options;
	questions(string q, string a, string o) {
		this->question = q;
		this->answer = a;
		this->options = o;
	}
};

int main() {
	questions question1("Where is the Kabbah located?\n", "In Makkah", " In Madinah, In Cuba, In Malaysia, In Makkah\n");
	questions question2("What is the greatest name of Allah?\n", "Allah", "Ar-Rahman, Ar-Raheem, Allah\n");
	questions question3("What is the battle of Badar named after?\n", "A well in the area", "I don't know, Beacuse yes, A well in the area, A mountain\n ");
	questions question4("Who is the known as the sword of Allah?\n", "Khalid ibn Walid", "Ali ibn Abi-Talib, Salman Al-Farasi, Hamza, Khalid ibn Walid\n");
	questions question5("Who was the 3rd calipha of islam?\n", "Uthman ibn Affan", "Abu Bakar, Talha, Uthman ibn Affan, Usama ibn Zaid\n");
	questions question6("How many people died at the battle of Badar?\n", "17", "21, none, 52, 67, 17\n");
	questions question7("What is the pleadge under the tree called?\n", "Bayat-al-Riduaan", "Bayat-al-Ridwaan, I don't know, A pledge under a tree, something\n");
	questions question8("Which prophet is in the 7th Heaven?\n", "Prophet Ibrahim", "Prophet Isa, Prophet Ibrahim, Prophet Musa\n");
	questions question9("Who is the only companion who's name was mentioned in the Qur'an?\n", "Zaid ibn Haritha", "Ali, Usama, Zaid ibn Haritha, Talha\n");
	questions question10("What was the original number of prayers?\n", "50", "200, 30, 5, 67\n");
	

	int score = 0;
	string response;
	int points;
	cout << "Note: you have to copy the exact wording and spaces to get the marks, sorry :)\n";
	cout << "Weclome to ISLAMIC QUIZ 101\n";
	cout << "Each questions gives you 2 points\n";
	cout << "Getting a question wrong doesn't deduct any of your points\n";
	cout << "Let the games begin\n";
	cout << "current score: " << score << '\n';
	
	
	cout << "First question: " << question1.question << '\n';
	cout << question1.options;
	getline(cin, response);
	if (response == question1.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}



	cout << "Second question: " << question2.question << '\n';
	cout << question2.options;
	getline(cin, response);
	if (response == question2.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}



	cout << "Third question: " << question3.question << '\n';
	cout << question3.options;
	getline(cin, response);
	if (response == question3.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}



	cout << "Fourth question: " << question4.question << '\n';
	cout << question4.options;
	getline(cin, response);
	if (response == question4.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}



	cout << "Fifth question: " << question5.question << '\n';
	cout << question5.options;
	getline(cin, response);
	if (response == question5.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}



	cout << "Sixth question: " << question6.question << '\n';
	cout << question6.options;
	getline(cin, response);
	if (response == question6.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}



	cout << "Seventh question: " << question7.question << '\n';
	cout << question7.options;
	getline(cin, response);
	if (response == question7.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}



	cout << "Eighth question: " << question8.question << '\n';
	cout << question8.options;
	getline(cin, response);
	if (response == question8.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}



	cout << "Ninth question: " << question9.question << '\n';
	cout << question9.options;
	getline(cin, response);
	if (response == question9.answer) {
		congrats();
		score += 2;
		cout << "current score: " << score << '\n';
	}
	else {
		boos();
		cout << score << '\n';
	}

	cout << "Well done, you've completed the quiz!!!\n";
	cout << "This is your score " << score << '\n';
	if (score >= 5) {
		cout << "Your islamic knowledge is spot on, WELLDONE\n";
	}
	else {
		cout << "You have to improve your islamic knowledge a bit\n";
	}



	return 0;
}



