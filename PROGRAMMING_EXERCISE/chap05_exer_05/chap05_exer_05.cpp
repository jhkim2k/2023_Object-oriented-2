#include "Complex.h" // �ʿ��� ��� ���� ��������

int main() {
	Complex a(5, 3);
	Complex b(3, -4); // �ΰ��� ���Ҽ��� ���� ��ü ���� �� �ʱ�ȭ

	a.print();
	cout << " + ";
	b.print();
	cout << " = ";
	add(a, b).print(); // add �Լ��� ���Ҽ� ���� ����
	cout << endl; // �ΰ��� ���Ҽ� ������ ������ �������� ���

	return 0;
}