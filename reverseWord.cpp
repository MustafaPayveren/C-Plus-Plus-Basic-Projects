#include <iostream>

using namespace std;

int main() {

	char word[100], tmp;

	cin >> word;

	int size;
	for (size = 0; word[size] != '\0'; ++size){}
	
	for (int i = 0; i < (size / 2); ++i)
	{
		tmp = word[i];
		word[i] = word[size - i - 1];
		word[size - i - 1] = tmp;
	}

	
	
	cout << word;
	return 0;
}