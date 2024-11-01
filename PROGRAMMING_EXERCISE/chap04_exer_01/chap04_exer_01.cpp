#include "person.h" // 클래스와 함수들이 구현되어 있는 헤도파일 선언

int main() {
	Person per; // 객체 생성

	per.setPerson("김철수", 21);
	per.print(); // 객체의 멤버변수 설정 및 출력

	return 0;
}