#include <iostream>
using namespace std;

int main() {

    //create a 20 X 20 map
    char map[20][20];

    //use 2 nested groups
    for (int i = 0; i < 20; i++) {//outer loop: row number
        for (int j = 0; j < 20; j++) { //inner loop: column
            if (rand() % 100 < 20 || j == 0 || j == 19 || i == 0)
                map[i][j] = '#';
            else
                map[i][j] = ' ';

        }


    }
    //print the grid
    for (int i = 0; i < 20; i++) {//outer loop: row number
        for (int j = 0; j < 20; j++) {
            cout << map[i][j];

            //inner loop: column
        }
        cout << endl;
    }



}
