#include <iostream>
#include <string>
#include <vector> // 벡터 사용을 위해 선언
#include <algorithm> // sort 사용을 위해 선언
using namespace std;

class Student {
	string name;
	double marks; // Student 클래스 멤버 변수 선언
public:
	Student() : name(""), marks(0) {}
	Student(string n, double m) : name(n), marks(m) {} // 생성자 중복 정의
	double getMarks() { return marks; } // 접근자 함수 선언
	void print(); // 출력 함수의 원형 선언
};

void Student::print() {
	cout << "이름: " << name << endl;
	cout << "학점: " << marks << endl;
} // 이름과 학점을 출력하는 함수의 구현

bool compare(Student& a, Student& b) {
	return a.getMarks() > b.getMarks();
} // sort 알고리즘에서 사용하기 위해 비교한다.