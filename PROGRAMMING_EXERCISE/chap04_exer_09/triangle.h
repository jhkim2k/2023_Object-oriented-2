#include <iostream>
using namespace std;

class Triangle {
private:
	int b;
	int h;
	int a; // Triangle Ŭ������ ��� ���� ����
public:
	void setTri(int, int);
	int area(); // �����ڿ� �ﰢ���� ���̸� ���ϴ� �Լ��� ���� ����
};

void Triangle::setTri(int n, int m) {
	b = n;
	h = m;
} // ������ �Լ� ����

int Triangle::area() {
	a = b * h / 2;
	return a;
} // �ﰢ���� ���� ���ϴ� �Լ� ����