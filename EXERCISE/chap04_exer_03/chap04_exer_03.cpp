#include "sum.h"

int main() {
	int a = 0, b = 0;
	int sum = 0;
	Sum num;

	cout << "첫 번째 정수 : ";
	cin >> a;
	cout << "두 번째 정수 : ";
	cin >> b;

	num.init(a, b);
	sum = num.add();

	cout << "연산 결과:" << sum << endl;

	return 0;
}