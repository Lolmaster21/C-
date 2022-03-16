#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> gUMBO;
    int size;
    int input;
    int i = 0;

    cin >> size;

    while (i != size) {
        cin >> input;
        gUMBO.push_back(input);
        i++;
    }

    sort(gUMBO.begin(), gUMBO.end());

    for (int DOGS = 0; DOGS < gUMBO.size(); DOGS++)
        cout << gUMBO[DOGS] << " ";
    return 0;
}
