#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

float calculateGeometric(int n);

int main() {

	int n;
	cout << "how many numbers will you enter: ";
	cin >> n;

	cout << fixed << setprecision(2); // iomanip library
	cout << "Geometric average of the numbers entered: " << calculateGeometric(n);
	return 0;

}

float calculateGeometric(int n) {

	float number;
	float product = 1;
	float geometric = 0;
	cout << "Enter the numbers: " << endl;
	for (int i = 0; i < n; ++i) {
		cin >> number;

		product = product * number;
		
	}
	return geometric = pow(product, (1/(double)n));
}