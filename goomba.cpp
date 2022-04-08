#include<iostream>
using namespace std;

class Goomba {
private:
int xPosition;
int yPosition;
string direction;
public:
Goomba(int x, int y);
void walk();
void print();

};

int main() {

//Goomba g1;
//Goomba g2;
//g1.setPostion(300, 200);

Goomba Bob(300, 200); //instantiate with constructor

 //LOOP------------
while (1) {//game loop
//physics engine!
Bob.walk();
//"render" section
Bob.print();
system("pause");
}

}

Goomba::Goomba(int x, int y) {
xPosition = x;
yPosition = y;
direction = "left";

}

void Goomba::walk() {
if (direction == "left")
xPosition -= 10;
if (xPosition <= 0)
direction = "right";



}

void Goomba::print(){ cout << "Hi, I'm a goomba and I'm at " << xPosition << ", " << yPosition << " And im moving" << direction << endl; }
