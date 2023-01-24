#include <iostream>
using namespace std;

void urmom( double bruh);


int main() {
    //variables 
    double bruh;
    while (1) {
        cout << "Gimme the mass: " << endl;
        cin >> bruh;

        urmom(bruh);

    }

}

void urmom(double bruh) {
    //variables 
    double r;
    const double g = 6.674e-11;
    const double c = 2.998e8;

    r = (2 * g * bruh) / (c * c);

    cout << "The radius is:" << r << endl;


}
