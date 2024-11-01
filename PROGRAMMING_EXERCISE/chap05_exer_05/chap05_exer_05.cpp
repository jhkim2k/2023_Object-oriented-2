#include "Complex.h" // 필요한 헤더 파일 가져오기

int main() {
	Complex a(5, 3);
	Complex b(3, -4); // 두개의 복소수를 위한 객체 생성 및 초기화

	a.print();
	cout << " + ";
	b.print();
	cout << " = ";
	add(a, b).print(); // add 함수로 복소수 덧셈 진행
	cout << endl; // 두개의 복소수 덧셈을 정해진 포멧으로 출력

	return 0;
}