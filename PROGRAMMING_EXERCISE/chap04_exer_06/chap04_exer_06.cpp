#include "Employee.h" // �ʿ��� ������� �������� 

int main() {
	Employee emp; // ��ü ����

	emp.setEmp("��ö��", 38, 2000000); // ������ �Լ��� �� ����

	cout << "Employee1: " << endl;
	emp.print(); // ���.

	return 0;
}