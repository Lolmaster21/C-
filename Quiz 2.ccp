#include <iostream>
using namespace std;
int main()
{
	int input;
	for (int j = 80; j >= 20; j -= 10) {
		cout << j << endl;
	}

	for (int i = 0; i < 5; i++) {
		cout << "BORK" << endl;
	}

	cout << "Hey there bestie how much money do you have?" << endl;
	cin >> input;
	if (input > 20) {
		cout << "Do you want to buy some coffee??" << endl;
	}

	else
		cout << "Oh youre short on cash let split half" << endl;



}
