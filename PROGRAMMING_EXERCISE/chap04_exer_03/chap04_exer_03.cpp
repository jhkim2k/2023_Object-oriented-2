#include "sum.h" // 필요한 헤더파일 선언

int main() {
	int a = 0, b = 0;
	int sum = 0;
	Sum num; // 필요한 변수 선언 및 초기화, 객체 생성까지

	cout << "첫 번째 정수 : ";
	cin >> a;
	cout << "두 번째 정수 : ";
	cin >> b; // 사용자로부터 두개의 정수 입력 받는다.

	num.init(a, b);
	sum = num.add(); // 초기화 한 후 연산의 결과를 sum 변수에 받는다.

	cout << "연산 결과:" << sum << endl; // 출력.

	return 0;
}