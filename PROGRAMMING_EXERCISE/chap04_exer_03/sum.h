#include <iostream>
using namespace std;

class Sum {
	int n1, n2; // Sum Ŭ������ ������� ����.
public:
	void init(int, int);
	int add(); // ����Լ��� ���� ����
};

void Sum::init(int x, int y) {
	n1 = x;
	n2 = y;
} // �ʱ�ȭ �Լ��� ����

int Sum::add() {
	return n1 + n2;
} // ������ ���� ����Լ��� ����