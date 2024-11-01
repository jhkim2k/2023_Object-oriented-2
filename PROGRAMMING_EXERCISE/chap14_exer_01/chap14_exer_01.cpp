#include <iostream>
using namespace std;

int main() {
	int age = 0;

	try {
		cout << "나이를 입력하시오: ";
		cin >> age;

		if (age < 0) {
			throw age;
		}
		else {
			cout << "사용자의 나이는 " << age << "입니다." << endl;
		}
	}
	catch (int a) {
		cout << "오류: 양수를 입력하여야 함" << endl;
	}
	return 0;
}