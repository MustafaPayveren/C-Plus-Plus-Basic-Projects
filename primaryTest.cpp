#include <iostream>


using namespace std;

int main() {

	int number = 0, counter = 1;
	char election = 'y';

	while (election == 'y') {

		cout << "Please enter a number: " << endl;
		cin >> number;

		if (number > 2) {

			while (counter < (number - 1)) {
				counter++;	// Sayi sayac'a tam bölünyor mu?

				if (number % counter == 0) {
					cout << "The number is not prime!" << endl;
					break;
				}
				else if (counter+1 == number) {

					cout << "The number is prime :) " << endl;

				}


			}	// while 
		}	// if

		else if (number == 2) {
			cout << "The number entered is the smallest prime number" << endl;
		}
		else {
			cout << "Prime numbers are positive" << endl;
		}

		cout << "y=continue  or   n=exit" << endl;
		cin >> election;
		counter = 1;

	
	}	// while
	return 0;
}