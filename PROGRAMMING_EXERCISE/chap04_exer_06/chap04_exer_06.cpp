#include "Employee.h" // 필요한 헤더파일 가져오기 

int main() {
	Employee emp; // 객체 생성

	emp.setEmp("김철수", 38, 2000000); // 설정자 함수의 값 전달

	cout << "Employee1: " << endl;
	emp.print(); // 출력.

	return 0;
}