#include <iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}
	double getLength() { return length; }
	double getWidth() { return width; }
	double getHeight() { return height; }
	double getVolume(void) {
		return length * width * height;
	}
	void print() {
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이: " << height << endl;
	}
	bool operator<(const Box& b2);
};