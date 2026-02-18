
#include <iostream>
#include <string>
using namespace std;

class Human {
public:
    string name;
    int age;
    string job;
};

struct worker :public Human {
    string workplace;

    worker(string n, int a, string j, string wp) {
        this->name = name;
        this->age = age;
        this->job = job;
        this->workplace = workplace;
	}

};

int main() {
    string n;
    int a;
    string j;
    string wp;
    string response;
    cout << "Whats your name\n";
	getline(cin, n);

    do {
        if (n.empty()) {
            cout << "You did not enter a name. Please enter your name\n";
            getline(cin, n);
		}
	} while (n.empty());

    
    cout << "How old are you\n";
    cin >> a; 
	cin.ignore();

    if (a < 18) {
        cout << "I am sorry but you are under age to join our team and to work\n";
        return 0;
    } 
    

    cout << "What is your job\n";
    getline(cin, j);

    do {
        if (n.empty()) {
            cout << "You did not enter a name. Please enter your name\n";
            getline(cin, n);
        }
    } while (n.empty());


    cout << "Where do you work\n";
    getline(cin, wp);

    do {
        if (n.empty()) {
            cout << "You did not enter a name. Please enter your name\n";
            getline(cin, n);
        }
    } while (n.empty());

    cout << "Welcome to the team " << n << "!\n";
	cout << "We are excited to have a " << j << " who is " << a << " years old working at " << wp << " join us!\n";
	worker employee1(n, a, j, wp);
	cout << "Hello " << employee1.name << " and " << " welcome to the team!\n";
    getline(cin, response);

    
    
   if(response == "Thank you" || response == "thank you") {
        cout << "We are glad to have you on board!\n";
    }
    else {
        cout << "No worries, we are excited to work with you anyway!\n";
   }


	return 0;
}

    

