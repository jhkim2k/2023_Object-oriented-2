#include "Airplane.h" // 필요한 헤더파일 가져오기

void main() {
	Airplane plane1{ 900, 300 };
	Airplane plane2{ 400, 1000 }; // 두개의 객체 선언

	plane1.setName("보잉 787");
	plane2.setName("에어버스 350"); // 각 객체의 string 변수를 설정자로 설정

	cout << "비행기 #1" << endl;
	plane1.print();
	cout << "비행기의 속도: " << plane1.getSpeed() << "Km/h\n" << endl; // 객체 plane1의 멤버 변수 출력
	
	cout << "비행기 #2" << endl;
	plane2.print();
	cout << "비행기의 속도: " << plane2.getSpeed() << "Km/h\n" << endl; // 객체 plane2의 멤버 변수 출력
}