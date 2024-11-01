#include "class.h"

int main() {
	MyClass* special = new MyClass[3];

	special->setName("special");
	special->setSize(3);
	special->setStudent();

	special->getStudent()[0].setName("홍길동");
	special->getStudent()[1].setName("김철수");
	special->getStudent()[2].setName("최자영");

	cout << "학급 " << special->getName() << "의 학생들은 다음과 같다." << endl;
	for (int i = 0; i < special->getSize(); i++) {
		cout << "학생 #" << i + 1 << ": " << special->getStudent()[i].getName() << endl;
	}

	delete[] special->getStudent();
	delete[] special;

	return 0;
}