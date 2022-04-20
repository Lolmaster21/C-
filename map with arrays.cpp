//This is Lukas Henriquez and its December 2020. This games about how if you get to 0 HP you lose and try again.
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int inventory[5] = { 0,0,0,0,0 };
//Global area
void Finalboss(int health, char boss);
void Monster();//Makes the monsters spawn in and without it it would be boring with no action
void inventoryDropper();
int BattleSystem(char Monster, int health);//declaration
int shop(int coins);
int main() {//game loop
    string name;
    string input = "dummy input";
    int playerhealth = 100;//This causes you to loose if you get to 0 in player health
    srand(time(NULL));

    int room = 1;
    while (input.compare("quit") != 0) { //game loop

        cout << " inventory:" << endl;
        cout << " stake " << inventory[0];
        cout << " healing root " << inventory[1];
        cout << " mushrooms " << inventory[2];
        cout << " knife " << inventory[3];
        cout << " potion " << inventory[4];

        switch (room) {
        case 1:
            inventoryDropper();
            cout << "Welcome we're excited to have you. You're walking through an empty street and you hear a car come. You think nothing of it until it started slowing down near you. You start walking a bit quicker and the car started to speed up. You start crying for help... somethings a bit...o f f f f f..." << endl << endl << endl << endl << endl;;
            cout << "Press n,e,s,w to move around... what is this lab?  " << endl;
            cout << "You're in room 1 you can go north and you see an exit infront of you. My heads really aching right now and why was I strap down on that table? " << endl;
            cin >> input;
            if (input.compare("north") == 0)
                room = 2;
            break;

        case 2:
            inventoryDropper();
            Monster();
            playerhealth = BattleSystem('s', playerhealth);
            cout << "you're in room 2, you can go north or south... theres some broken chemicals in the lab. It smells like chemicals and broken bottles with green stuff. I wonder what they are? " << endl << endl << endl << endl << endl;;


            if (input.compare("south") == 0)
                room = 1;
            if (input.compare("north") == 0)
                room = 3;
            break;

        case 3:

            inventoryDropper();
            cout << "you're in room 3, you can go east or west " << endl;
            cout << "You see an airvent but after that attack I dont think we wanna do that again. I want to understand why I heard screaming like that. Im panicking and I want to know where I am! " << endl << endl << endl << endl;
            cin >> input;
            if (input.compare("east") == 0)
                room = 3;
            if (input.compare("west") == 0)
                room = 4;
            break;

        case 4:
            inventoryDropper();
            Monster();
            playerhealth = BattleSystem('s', playerhealth);
            cout << "you're in room 4, you can go north or east" << endl;
            cout << "The room has gotten darker and hear a loud thud. You find a falsh light and use it because it's hard to see anything. There some testing tubes and chambers. Youre starting to have an idea in what kind of area you're starting to be in " << endl << endl << endl << endl << endl;;
            cin >> input;
            if (input.compare("east") == 0)
                room = 3;
            if (input.compare("north") == 0)
                room = 5;
            break;

        case 5:
            inventoryDropper();
            cout << "you're in room 5, you can go south or west " << endl;
            cout << "You see a door but its locked. Maybe if you can use an item that you found it can probably help you exit out of this room. Theres a random tree and it smells really nice" << endl << endl << endl << endl;
            cin >> input;
            if (input.compare("south") == 0)
                room = 4;
            if (input.compare("west") == 0)
                room = 6;
            break;

        case 6:
            inventoryDropper();
            cout << "you're in room 6, you can go north or east " << endl;
            cout << "Good job you found your way out and its a huge hallway leading down with arrows on the floor. Theres also a vending machine in the hallway and you can see another door " << endl;
            cin >> input;
            if (input.compare("east") == 0)
                room = 5;
            if (input.compare("north") == 0)
                room = 7;
            break;
        case 7:
            inventoryDropper();
            Monster();
            cout << "you're in room 7, you can go s or w " << endl;
            cout << "The walls seem like they're closing in on you " << endl;
            cin >> input;
            if (input.compare("south") == 0)
                room = 7;

            if (input.compare("west") == 0)
                room = 8;
            break;

        case 8:
            inventoryDropper();
            Monster();
            playerhealth = BattleSystem('s', playerhealth);
            cout << "you're in room 8, you can go east or south " << endl;
            cout << "Somethings off of this room better keep moving except how theres another tree. I guess they really like decorating this place" << endl;
            cin >> input;
            if (input.compare("east") == 0)
                room = 7;
            if (input.compare("south") == 0)
                room = 9;
            break;

        case 9:
            inventoryDropper();
            cout << "you're in room 9, you can go north or east " << endl;
            cout << "Uh oh it seems like someone decided to throw spikes on the floor better not step on it if not youll take masive amounts of damage. " << endl;
            cin >> input;
            if (input.compare("north") == 0)
                room = 8;
            if (input.compare("east") == 0)
                room = 10;
            break;

        case 10:
            Monster();
            playerhealth = BattleSystem('s', playerhealth);
            Finalboss('s', playerhealth);
            cout << "I think its finished but it left effects on me. I think its time to leave this place " << endl;
            cout << " " << endl;
            cin >> input;
            if (input.compare("east") == 0)
                room = 11;
        case 11:
            cout << "Thanks for playing :) also you told the news channel and hes in trouble and went to jail so justice is served" << endl;
            break;


        }//end switch
    }//end game loop
}//end main

//monster gen function definition goes here
void Monster() {
    int num = rand() % 100 + 1;
    if (num <= 20)
        cout << " Theres a shadow!!!!" << endl;
    else if (num <= 40)
        cout << " Theres a robot!!!" << endl;
    else if (num <= 60)
        cout << " Theres a broken virus" << endl;
    else
        cout << " Theres a rat..." << endl;




}
void Finalboss(int health, char boss) {
    char input;
    while (health > 0 && boss > 0) {
        int num = rand() % 100 + 1;
        if (num <= 20) {
            cout << "The scientist hit you for 40 points!!!" << endl;
            num = rand() % 30 + 5;
            health -= num;
        }
        else if (num <= 40) {
            cout << "The scientist hit you for 20 points!!!" << endl;
            health -= num;
        }
        else if (num <= 60) {
            cout << "The scientist hit you with a potion and now you have a random effect!!." << endl;
            health -= num;
        }
        else
            cout << "The scientist hit you for 35 points!!!" << endl;
        health -= num;
    }
}
//inventory dropper function definition
void inventoryDropper() {
    int num = rand() % 5; //number b/t 0-4
    inventory[num] += 1;
}

int BattleSystem(char Monster, int health) {
    char input;//local to battlesystem
    int num;
    int monsterhealth;
    if (Monster == 's')//Phantom
        monsterhealth = 20;
    if (Monster == 'r')
        monsterhealth = 50;
    if (Monster == 'r')
        monsterhealth = 22;
    if (Monster == 'v')
        monsterhealth = 40;
    //need more if statements for your different monsters

    while (health > 0 && monsterhealth > 0) {
        cout << "Would you like to (r)un, (f)ight or use an (i)tem" << endl;
        cin >> input;
        if (input == 'r') {
            int num = rand() % 100 + 1;
            if (num <= 20) {
                cout << "You ran away from the monster" << endl;
                return health; //kills the function
            }
            else
                cout << "You couldn't escape the monster" << endl;

        }
        else if (input == 'f') {
            cout << "You chose fight the monster!" << endl;
            num = rand() % 100 + 1;
            cout << "you hurt the monster for " << num << " damage." << endl;
            monsterhealth -= num; //hurt the monster

        }

        else if (input == 'i') {
            cout << "you used a health potion" << endl;
            health += 20;
        }

        //monster attacks!
        if (Monster == 'v') {
            num = rand() % 10 + 3;
            cout << "the virus infected you for " << num << " damage!" << endl;
            health -= num;

        }
        if (Monster == 's') {
            num = rand() % 30 + 5;
            cout << "A shadow hurt you for" << num << "damage!" << endl;
            health -= num;
        }
        if (Monster == 'r') {
            num = rand() % 50 + 5;
            cout << "A rat bit you for" << num << "damage!" << endl;
            health -= num;

        }
        if (Monster == 'r') {
            num = rand() % 20 + 5;
            cout << "A robot shot you for" << num << "damage!" << endl;
            health -= num;


        }
        //repeat for other monsters


    }//end of battle loop
    return health;


}

