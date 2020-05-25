#include <iostream>
#include <math.h>
using namespace std;

double circulusArea;
double squareArea;
double rectangleArea;
double triangleArea;

double pi = 3.14;

int main() {

	char election;
	cout << "Which geometric figure? " << endl;
	cout << "circulus=c or  square=s  or  rectang=r   or   triangle=t   :     ";
	cin >> election;
	switch (election) {
	case 'c':
		double r;
		cout << "half Diameter= ";
		cin >> r;
		circulusArea = pi * r * r;
		cout << "Circulus Area=" << circulusArea << endl;
		break;
	case 's':
		double a;
		cout << "edge: ";
		cin >> a;
		squareArea = a * a;
		cout << "Square Area=" << squareArea << endl;
		break;
	case 'r':
		double	 ab, b;
		cout << "first edge: ";
		cin >> ab;
		cout << "second edge: ";
		cin >> b;
		rectangleArea = ab * b;
		cout << "Rectang Area=" << rectangleArea << endl;
		break;
	case 't':
		double h, ba;
		cout << "hight: ";
		cin >> h;
		cout << "length: ";
		cin >> ba;
		triangleArea = (ba * h) / 2;
		cout << "Triangle Area=" << triangleArea << endl;
		break;
	}

	
}