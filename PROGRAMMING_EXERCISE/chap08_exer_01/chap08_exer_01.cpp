#include <iostream>
using namespace std;

int main() {
	int i;

	cout << "몇 개의 정수를 입력합니까? ";
	cin >> i;

	int* p = new int[i];

	for (int n = 0; n < i; n++) {
		cout << "정수를 입력하시오 : ";
		cin >> p[n];
	}

	cout << "입력된 정수는: ";

	for (int n = 0; n < i; n++) {
		cout << p[n] << ", ";
	}
	cout << endl;

	delete[] p;

	return 0;
}