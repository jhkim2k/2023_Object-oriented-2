#include "Manager.h"

int main() {
	Manager a("��ö��", 200, 100);

	cout << "�̸�: " << a.getName() << endl;
	cout << "����: " << a.getSalary() << endl;
	cout << "���ʽ�: " << a.getBonus() << endl;
	a.computeSalary();

	return 0;
}