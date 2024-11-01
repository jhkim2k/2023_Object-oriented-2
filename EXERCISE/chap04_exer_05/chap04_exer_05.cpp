#include "dice.h"

int main() {
	Dice Dice;

	Dice.roll();
	cout << "주사위의 값=" << Dice.getFace() << endl;
	
	return 0;
}