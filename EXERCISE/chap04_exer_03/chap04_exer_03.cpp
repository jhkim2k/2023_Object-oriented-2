#include "sum.h"

int main() {
	int a = 0, b = 0;
	int sum = 0;
	Sum num;

	cout << "ù ��° ���� : ";
	cin >> a;
	cout << "�� ��° ���� : ";
	cin >> b;

	num.init(a, b);
	sum = num.add();

	cout << "���� ���:" << sum << endl;

	return 0;
}