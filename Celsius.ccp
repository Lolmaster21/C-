#include <iostream>
#include <cmath>
using namespace std;

float temp(char F, float C);


int main()
{
    char input;
    float input2;

    while (1 == 1) {
        cout << "Enter  temp in (F)arenheight or (C)elsius" << endl;
        cin >> input;
        cout << "Please enter your number " << endl;
        cin >> input2;

        cout << temp(input, input2) << "\n\n";
    }

}

float temp(char F, float C) {
    if (F == 'F')
        return ((C - 32) / 1.8);
    else if (F == 'C')
        return ((C * 1.8) + 32);
    

}
   
