#include "Box.h" // �ʿ��� ������� ��������

int main() {
	Box box1{ 0, 0, 0 };
	Box box2{ 3, 2, 4 }; // �ΰ��� ��ü ���� �� �ʱ�ȭ

	cout << "���� #1" << endl;
	box1.print(); // box1 ��ü�� ����, �ʺ�, ����, ���� ���

	cout << "\n���� #2" << endl;
	box2.print(); // box2 ��ü�� ����, �ʺ�, ����, ���� ���

	return 0;
}