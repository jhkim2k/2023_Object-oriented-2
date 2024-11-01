#include "triangle.h" // 필요한 헤더파일 가져오기

int main() {
	Triangle tri; // 객체 생성

	tri.setTri(3, 4); // 설정자를 통해 멤버 변수에 값 설정
	
	cout << "밑변이 3이고 높이가 4인 삼각형의 면적: " << tri.area() << endl; // 삼각형의 넓이 출력

	return 0;
}