#include "box.h"

void printBox(Box b1) {
	cout << "������ ����: " << b1.length << endl;
	cout << "������ �ʺ�: " << b1.width << endl;
	cout << "������ ����: " << b1.height << endl;
	cout << "������ ����: " << b1.getVolume() << endl;
}

int main() {
	Box a(10, 10, 10);

	cout << "���� #1\n";
	printBox(a);

	return 0;
}