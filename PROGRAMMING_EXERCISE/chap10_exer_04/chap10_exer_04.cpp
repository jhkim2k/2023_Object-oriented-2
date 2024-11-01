#include "box.h"

void printBox(Box b1) {
	cout << "상자의 길이: " << b1.length << endl;
	cout << "상자의 너비: " << b1.width << endl;
	cout << "상자의 높이: " << b1.height << endl;
	cout << "상자의 부피: " << b1.getVolume() << endl;
}

int main() {
	Box a(10, 10, 10);

	cout << "상자 #1\n";
	printBox(a);

	return 0;
}