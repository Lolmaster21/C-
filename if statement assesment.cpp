#include<iostream>
using namespace std;

int main() {
	int input;

	cout << "How many cooookies you have?" << endl;
	cin >> input;

	if (input < 5) {

		cout << ("You want a cookie??") << endl;

	}
	if (input > 10) {

		cout << ("To many cookies cough them up") << endl;

	}

	else if (input > 10 - 5) {

		cout << ("Hey thats pretty good amount of cookies") << endl;

	}


	//part 2--------------------------------------------------------------------------------------------
	char character;

	cout << "Which character is your favorite((b)art simpson, (s)cooby doo, (r)ick, or (d)affy duck)" << endl;
	cin >> character;

	if (character == 'b') {

		cout << ("eat my shorts") << endl;

	}

	else if (character == 's') {

		cout << ("scooby dooby doo") << endl;

	}

	else if (character == 'r') {

		cout << ("Wubba lubba dub dub") << endl;

	}

	else if (character == 'd') {

		cout << ("sufferin' succotash!") << endl;

	}

	//print Switch statement-----------------------------------------------------------------
	char characters;
	cout << "Again what is your favorite character?" << endl;
	cin >> characters;

	switch (characters) {

	case 'b':
		cout << ("Eat my shorts") << endl;
		break;

	case 'd':

		cout << ("sufferin' succotash!") << endl;
		break;

	case 'r':
		cout << ("Wubba lubba dub dub") << endl;

		break;

	case 's':
		cout << ("scooby dooby doo") << endl;

		break;



	}

	char desert;
	char topping;
	cout << "Do you want (i)ce cream or (c)andy?" << endl;
	cin >> desert;

	if (desert == 'c') {

		cout << "Do you want (c)hocolate or (f)ruit?" << endl;
		cin >> topping;

		if (topping == 'c') {
			cout << "You got a hersheys bar" << endl;

		}
		else if (topping == 'f') {
			cout << "Starbursttttt" << endl;
		}
	}

	else if (desert == 'i') {
		cout << "Do you want (c)hocolate or (f)ruit?" << endl;
		cin >> topping;

		if (topping == 'c') {
			cout << "You got a hot fudge sundae" << endl;

		}
		else if (topping == 'f') {
			cout << "Strawberry blizzzardddddddd" << endl;
		}
	}

}
