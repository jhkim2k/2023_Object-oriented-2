#include<iostream>
using namespace std;

int flip();

int main() {
	int front = 0;
	int back = 0; // ���� 2�� ����� �ʱ�ȭ

	for (int i = 0; i < 100; i++) { // 100�� �ݺ�
		if (flip()) { // filp �Լ��� 1,0�� ���� ���� �ٲ�.
			front++;
		}
		else {
			back++;
		} // 1 �Ǵ� 0�� ���� ���� ���߿� �ϳ��� �� 1����.
	}
	cout << "������ �ո�: " << front << endl;
	cout << "������ �޸�: " << back << endl; // ��� ���
	return 0;
}

int flip() {
	return rand() % 2;
} // �����ϰ� 1 �Ǵ� 0 return