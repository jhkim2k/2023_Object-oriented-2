#include "triangle.h" // �ʿ��� ������� ��������

int main() {
	Triangle tri; // ��ü ����

	tri.setTri(3, 4); // �����ڸ� ���� ��� ������ �� ����
	
	cout << "�غ��� 3�̰� ���̰� 4�� �ﰢ���� ����: " << tri.area() << endl; // �ﰢ���� ���� ���

	return 0;
}