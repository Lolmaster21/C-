#include<iostream>
using namespace std;

float circumference(int radius);

int main() {	

	int radius;
	int i = 3;
	char q;
	char input = 'y';

	cout << "Give me the number of the radius" << endl;
	cin >> radius;

	cout << "your radius is "<< circumference(radius) << endl;


	while (input == 'y') {

		cout << "DONUT" << endl;
		cout << "(y)es for a donut or press any other key to quit " << endl;
		cin >> input;
		

	}
	cout << "Thank you goodbye" << endl;

	while ( i <= 33) {
		cout << i << endl;
		i += 5;
	}



}


float circumference(int radius) {
	

	float circle = 2 * 3.14 * radius;

	return circle;

}
