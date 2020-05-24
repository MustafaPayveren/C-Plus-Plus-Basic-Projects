#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

	int estimate;
	char answer = 'y';

	srand(time(0));

	while (answer == 'y') {
		int randomNumber = rand() % 100;
		
		cout << "I kept a number between zero and a hundred." << endl;
		cout << "come on, Estimate : ";
		cin >> estimate;

		while (estimate != randomNumber) {

			if (estimate < randomNumber) {
				cout << estimate << " is smaller than my number :(" << endl;
			}
			else {
				cout << estimate << " is bigger than my number :(" << endl;

			}
			cout << "Repeat guess: ";
			cin >> estimate;

		}	//while 

		cout << "Correct! Congratulations  My number is " << randomNumber << endl;

		cout << "Do you want play again?";
		cout << "   y=Yes or n=No : ";
		cin >> answer;


	}
	cout << "Good Bye :)" << endl;
	return 0;
}