#include <iostream>
using namespace std;

int main() {
	int age = 0;

	try {
		cout << "���̸� �Է��Ͻÿ�: ";
		cin >> age;

		if (age < 0) {
			throw age;
		}
		else {
			cout << "������� ���̴� " << age << "�Դϴ�." << endl;
		}
	}
	catch (int a) {
		cout << "����: ����� �Է��Ͽ��� ��" << endl;
	}
	return 0;
}