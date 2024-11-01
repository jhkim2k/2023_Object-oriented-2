#include <iostream>
using namespace std;

class Triangle {
private:
	int b;
	int h;
	int a;
public:
	void setTri(int, int);
	int area();
};

void Triangle::setTri(int n, int m) {
	b = n;
	h = m;
}

int Triangle::area() {
	a = b * h / 2;
	return a;
}