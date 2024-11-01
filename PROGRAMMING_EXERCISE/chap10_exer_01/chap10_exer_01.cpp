#include "Box.h"

Box Box::operator+(const Box& b2) {
	Box b;
	b.length = this->length + b2.length;
	b.width = this->width + b2.width;
	b.height = this->height + b2.height;
	return b;
}

int main() {
	Box a(10, 10, 10), b(20, 20, 20), c;

	c = a + b;

	cout << "상자 #1\n";
	a.print();
	cout << "상자의 부피: " << a.getVolume() << endl;

	cout << "\n상자 #2\n";
	b.print();
	cout << "상자의 부피: " << b.getVolume() << endl;

	cout << "\n상자 #3\n";
	c.print();
	cout << "상자의 부피: " << c.getVolume() << endl;

	return 0;
}