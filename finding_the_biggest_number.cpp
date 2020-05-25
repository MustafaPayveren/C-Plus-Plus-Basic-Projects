#include <iostream>
using namespace std;

int the_biggest_number(int n);

int main() {

	int n;

	cout << "how many numbers will be entered? : ";
	cin >> n;
	cout << "The largest number among the entered numbers: " << the_biggest_number(n);
	return 0;

}

int the_biggest_number(int n){

	int theBiggest = 0;
	int number=0;
	cout << "Please enter the numbers : " << endl;

	for (int i = 0; i < n; ++i) {
		cin >> number;
		if (number > theBiggest) {
			
			theBiggest = number;
		}
	}
	return theBiggest;
}