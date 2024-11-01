#include "Box.h" // 필요한 헤더파일 가져오기

int main() {
	Box box1{ 0, 0, 0 };
	Box box2{ 3, 2, 4 }; // 두개의 객체 생성 및 초기화

	cout << "상자 #1" << endl;
	box1.print(); // box1 객체의 길이, 너비, 높이, 부피 출력

	cout << "\n상자 #2" << endl;
	box2.print(); // box2 객체의 길이, 너비, 높이, 부피 출력

	return 0;
}