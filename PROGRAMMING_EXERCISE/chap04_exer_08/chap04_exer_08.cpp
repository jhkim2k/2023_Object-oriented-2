#include "complex.h" // 필요한 헤더파일 가져오기

int main() {
	Complex com; // 객체 생성

	com.setCom(5, 3);
	com.print();

	com.setCom(3, 4);
	com.print(); // 각각 설정자로 값 대입 시키고 출력.

	return 0;
}