#include "computer.h" // 필요한 헤더파일 가져오기.

int main() {
	Computer com; // 객체 생성 

	com.setComputer("오피스컴퓨터", 8, 4.2);
	com.print(); // 객체의 멤버변수 값 설정 및 출력

	return 0;
}