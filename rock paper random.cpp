#include<iostream>
#include <string>
using namespace std;

const int throw1 = 1;
const int throw2 = 1;


const string gestures[5] = { "Rock", "Paper", "Scissors", "Lizard", "Spock" };


int winloss[5][5] = {
          2, 0, 1, 1, 0,
          1, 2, 0, 0, 1,
          0, 1, 2, 1, 0,
          0, 1, 0, 2, 1,
          1, 0, 1, 0, 2
};





void lol();

void greeting();

void print_gestures();


int calc_winner(int winloss[][5], int throw1, int throw2);


int main() {

    lol();


}

void greeting() {
    cout << "Welcome to Rock-Paper-Scissors-Lizard-Spock!" << endl;


}

void print_gestures() {
    cout << "Choices are: " << endl;
    cout << "(0) Rock, (1) Paper, (2) Scissors, (3) Lizard, (4) Spock " << endl;


}

int input_throw(string thrower, string opponent) {
    cout << "It is " << thrower << "'s turn." << endl;
    print_gestures();
    cout << "No peeking, " << opponent << "." << endl;
    int the_throw;
    cout << thrower << ", what is your throw?" << endl;
    cin >> the_throw;

    int len = gestures->size();

    while (the_throw < 0 or the_throw >= len) {
        cout << "Invalid choice; try again." << endl;
        cout << thrower << "What is your throw?" << endl;
        cin >> the_throw;

    }
    cout << thrower << " throws," << gestures[the_throw] << "." << endl;
    return the_throw;



}

void lol() {
    string name1;
    cout << "Please give me a name " << endl;
    getline(cin, name1);
    string name2;
    cout << "Please give me a second name " << endl;
    getline(cin, name2);

    int throw1 = input_throw(name1, name2);

    int throw2 = input_throw(name2, name1);

    int winner = calc_winner(winloss, throw1, throw2);

    while (winner == 2) {
        cout << "it's a tie; both players will throw again." << endl;
        int throw1 = input_throw(name1, name2);

        int throw2 = input_throw(name1, name2);

        int winner = calc_winner(winloss, throw1, throw2);
    }

    if (winner == 1) {
        cout << gestures[throw1] << " defeats " << gestures[throw2] << "." << endl;
        cout << name1 << " defeats " << name2 << "." << endl;
    }
    else {
        cout << gestures[throw1] << " defeats " << gestures[throw2] << "." << endl;
        cout << name2 << " defeats " << name1 << "." << endl;
    }



}


int calc_winner(int winloss[][5], int throw1, int throw2) {
    return (winloss[throw1][throw2]);
}
