#include <iostream>
using namespace std;

int the_smallest_number(int n);

int main() {

	int n;

	cout << "how many numbers will be entered? : ";
	cin >> n;
	cout << "The smallest number among the entered numbers: " << the_smallest_number(n);
	return 0;

}

int the_smallest_number(int n) {

	int theSmallest = 1000000000;
	int number = 0;
	cout << "Please enter the numbers : " << endl;

	for (int i = 0; i < n; ++i) {
		cin >> number;
		if (number < theSmallest) {

			theSmallest = number;
		}
	}
	return theSmallest;
}