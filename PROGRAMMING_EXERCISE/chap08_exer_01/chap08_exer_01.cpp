#include <iostream>
using namespace std;

int main() {
	int i;

	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> i;

	int* p = new int[i];

	for (int n = 0; n < i; n++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> p[n];
	}

	cout << "�Էµ� ������: ";

	for (int n = 0; n < i; n++) {
		cout << p[n] << ", ";
	}
	cout << endl;

	delete[] p;

	return 0;
}