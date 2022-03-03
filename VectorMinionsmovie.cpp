#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(NULL));
    vector<int> myVector;
    vector<int>::iterator myIter;

    for (int i = 0; i < 20; i++)
        myVector.push_back(rand() % 80);

    cout << endl << endl;
    for (myIter = myVector.begin(); myIter != myVector.end(); ++myIter)
        cout << *myIter << " ";

    sort(myVector.begin(), myVector.end());

    cout << endl << endl;
    for (myIter = myVector.begin(); myIter != myVector.end(); ++myIter)
        cout << *myIter << " ";

    random_shuffle(myVector.begin(), myVector.end());

    cout << endl << endl;
    for (myIter = myVector.begin(); myIter != myVector.end(); ++myIter)
        cout << *myIter << " ";





}
