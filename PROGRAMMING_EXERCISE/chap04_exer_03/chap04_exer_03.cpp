#include "sum.h" // �ʿ��� ������� ����

int main() {
	int a = 0, b = 0;
	int sum = 0;
	Sum num; // �ʿ��� ���� ���� �� �ʱ�ȭ, ��ü ��������

	cout << "ù ��° ���� : ";
	cin >> a;
	cout << "�� ��° ���� : ";
	cin >> b; // ����ڷκ��� �ΰ��� ���� �Է� �޴´�.

	num.init(a, b);
	sum = num.add(); // �ʱ�ȭ �� �� ������ ����� sum ������ �޴´�.

	cout << "���� ���:" << sum << endl; // ���.

	return 0;
}