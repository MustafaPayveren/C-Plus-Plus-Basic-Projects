#include <iostream>

using namespace std;

void ebobHesapla(int a, int b, int *pEbob);
void ekokHesapla(int a, int b, int *pEkok);
void hesapla(int a, int b, int *pEbob, int *pEkok);

int main() {

	int a, b, ebob, ekok;
	cin >> a >> b;
	hesapla(a, b, &ebob, &ekok);
	cout << "Sayilarin ebobu: " << ebob << endl;
	cout << "Sayilarin ekoku: " << ekok << endl;
	return 0;
}
void ebobHesapla(int a, int b, int* pEbob) {
	*pEbob = 1;
	int ortakBolen = 2;
	while (a != 1 && b != 1) {
		while (a % ortakBolen == 0 && b % ortakBolen == 0) {
			*pEbob *= ortakBolen;
			a /= ortakBolen;
			b /= ortakBolen;
		}

		while (a % ortakBolen == 0) {
			a /= ortakBolen;
		}
		while (b % ortakBolen==0){
			b /= ortakBolen;
		}
		++ortakBolen;

	}
	}


void ekokHesapla(int a, int b, int* pEkok) {
	int ebob;
	ebobHesapla(a, b, &ebob);
	*pEkok = a * b / ebob;
}

void hesapla(int a, int b, int *pEbob, int *pEkok) {
	ebobHesapla(a, b, pEbob);
	ekokHesapla(a, b, pEkok);
}