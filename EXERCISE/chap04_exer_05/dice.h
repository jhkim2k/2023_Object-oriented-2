#include <iostream>
using namespace std;

class Dice {
	int face = 1;
public:
	void roll();
	int getFace();
};

void Dice::roll() {
	face = (int)(rand() % 6 + 1);
}

int Dice::getFace() {
	return face;
}