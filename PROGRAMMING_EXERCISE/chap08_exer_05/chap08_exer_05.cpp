#include "class.h"

int main() {
	MyClass* special = new MyClass[3];

	special->setName("special");
	special->setSize(3);
	special->setStudent();

	special->getStudent()[0].setName("ȫ�浿");
	special->getStudent()[1].setName("��ö��");
	special->getStudent()[2].setName("���ڿ�");

	cout << "�б� " << special->getName() << "�� �л����� ������ ����." << endl;
	for (int i = 0; i < special->getSize(); i++) {
		cout << "�л� #" << i + 1 << ": " << special->getStudent()[i].getName() << endl;
	}

	delete[] special->getStudent();
	delete[] special;

	return 0;
}