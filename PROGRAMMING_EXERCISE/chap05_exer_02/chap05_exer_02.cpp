#include "Airplane.h" // �ʿ��� ������� ��������

void main() {
	Airplane plane1{ 900, 300 };
	Airplane plane2{ 400, 1000 }; // �ΰ��� ��ü ����

	plane1.setName("���� 787");
	plane2.setName("������� 350"); // �� ��ü�� string ������ �����ڷ� ����

	cout << "����� #1" << endl;
	plane1.print();
	cout << "������� �ӵ�: " << plane1.getSpeed() << "Km/h\n" << endl; // ��ü plane1�� ��� ���� ���
	
	cout << "����� #2" << endl;
	plane2.print();
	cout << "������� �ӵ�: " << plane2.getSpeed() << "Km/h\n" << endl; // ��ü plane2�� ��� ���� ���
}