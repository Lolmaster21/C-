#include <iostream>
using namespace std;

int main() {
float input1;
float input2;
cout << "give me two numbers: " << endl;
cin >> input1;
cin >> input2;
float nums = input1 / input2;
cout << "The result was " << nums << endl;
if (input1 < input2) {
cout << "In Order:" << input1 << " " << input2 << endl;

}
else  {
cout << "In order: " << input2<< input1 << endl;
}
int nums1 = input1;

if (nums1 % 2 == 1)
cout << "odd"<< nums1;

}
