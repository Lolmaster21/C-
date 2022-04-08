#include<iostream>
using namespace std;

class FlyingKoopa {
private:
	int xPosition;
	int yPosition;
	string direction;
public:
	FlyingKoopa(int x, int y);
	void walk();
	void print();

};

int main() {

	

	FlyingKoopa Bob(410, 400); //instantiate with constructor

	 //LOOP------------
	while (1) {//game loop
	//physics engine!
		Bob.walk();
		//"render" section
		Bob.print();
		system("pause");
	}

}

FlyingKoopa::FlyingKoopa(int x, int y) {
	xPosition = x;
	yPosition = y;
	direction = "left";

}

void FlyingKoopa::walk() {
	if (direction == "left")
		xPosition -= 10; //Subtracts how much it goes left by with the x pos
	if (xPosition <= 0)
		direction = "up";
	if (direction == "up")
		yPosition += 20; //adds how much it goes up by with the y pos
	



}

void FlyingKoopa::print() { cout << "Hi, I'm a koopa and I'm at  " <<  xPosition  << ", " <<  yPosition  << " And im moving" << direction << endl; }
