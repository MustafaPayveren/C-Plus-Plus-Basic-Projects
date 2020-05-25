#include <iostream>
#include <iomanip>


using namespace std;

float calculateArithmetic(int n);

int main() {

	int n;
	cout << "how many numbers will you enter: ";
	cin >> n;

	cout << fixed << setprecision(2); // iomanip library
	cout << "Arithmetic average of the numbers entered: " << calculateArithmetic(n);
	return 0;

}

float calculateArithmetic(int n) {

	int number;
	float total = 0;

	cout << "Enter the numbers: " << endl;
	for (int i = 0; i < n; ++i) {
		cin >> number;
		total += number;
	}
	return total / n;
}