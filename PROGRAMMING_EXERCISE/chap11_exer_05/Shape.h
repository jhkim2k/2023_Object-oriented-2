#include <iostream>
using namespace std;

class Shape {
	int x, y;
	string color;
	double getArea();
	int getX() { return x; }
	int getY() { return y; }
	string getColor() { return color; }
	void setX(int a) { x = a; }
	void setY(int b) { y = b; }
	void setColor(string s) { color = s; }
};

double Shape::getArea() {
	return 0;
}
