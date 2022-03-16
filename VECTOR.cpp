#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
	string input;
	vector<string> frand; //frand created
	vector <string>::iterator frands;
	bool cool = false;

	cout << "Enter 5 of your friends name :P" << endl;
	for (int i = 0; i < 5; i++) {
		
		cin >> input;
		frand.push_back(input);
	
	}

	//find function
	if (find(frand.begin(), frand.end(), "alejandro") != frand.end())
		cout << "Found it!" << endl;
	else
		cout << "Oop no where to be found" << endl;


	//another find function
	frands = find(frand.begin(), frand.end(), "alejandro");
	if (frands != frand.end())
		cout << "Fount it!" << endl;
	else cout << "Not there!" << endl;





	



}

