#include "complex.h" // �ʿ��� ������� ��������

int main() {
	Complex com; // ��ü ����

	com.setCom(5, 3);
	com.print();

	com.setCom(3, 4);
	com.print(); // ���� �����ڷ� �� ���� ��Ű�� ���.

	return 0;
}