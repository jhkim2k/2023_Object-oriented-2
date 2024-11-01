#include <iostream>
#include <string>
#include <vector> // 필요한 헤더파일 선언

using namespace std;

class Contact {
private:
	string name;
	string tel; // Contact 클래스의 멤버 변수 선언
public:
	Contact() : name(""), tel("") {}
	Contact(string n, string t) : name(n), tel(t) {} // 생성자 중복 선언

	string getName() { return name; }
	string getTel() { return tel; } // 접근자 함수 선언
};