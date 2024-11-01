#include <iostream>
using namespace std;

class Box {
private:
	int length;
	int width;
	int height; // Box 클래스의 멤버 변수 선언
	bool boolean; // 박스가 비었는지 안비었는지 알기 위해 bool 타입 변수 선언
public:
	int getLength() { return length; }
	int getWidth() { return width; }
	int getHeight() { return height; } // 각 멤버 변수 접근자 함수 선언
	void setLength(int l) { length = l; }
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	bool setBoolean() { return boolean; } // 각 멤버 변수 설정자 함수 선언
	void setBoolean(bool b) { boolean = b; } // bool 변수 설정자 함수 선언

	Box(int n = 0, int m = 0, int h = 0) : length(n), width(m), height(h) {}
	Box() { length = 0; width = 0; height = 0; } // 생성자 중복 선언

	void empty();
	int getVolume();
	void print(); // 각 함수의 원형 선언
};

void Box::empty() {
	if (length * width * height == 0) {
		boolean = true;
	}
	else {
		boolean = false;
	}
} // 박스가 비어있는지 아닌지 판단하는 함수의 구현

int Box::getVolume() {
	return length * width * height;
} // 박스 부피를 계산하는 함수의 구현

void Box::print() {
	cout << "상자의 길이: " << length << endl;
	cout << "상자의 너비: " << width << endl;
	cout << "상자의 높이: " << height << endl;
	cout << "상자의 부피: " << getVolume() << endl;
} // 길이, 너비, 높이와 박스 부피를 출력하는 함수의 구현