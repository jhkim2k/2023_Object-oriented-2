#include <iostream>
#include <string>
using namespace std;

class Rect {
	int width, height;
public:
	Rect() {
		width = 10;
		height = 20;
	}
	~Rect() {}
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	int getWidth() { return width; }
	int getHeight() { return height; }

	int getArea() { return width * height; }
	int getPerimeter() { return 2 * (width + height); }
};

bool is_equal(Rect& r1, Rect& r2) {
	return (r1.getWidth() == r2.getWidth() && r1.getHeight() == r2.getHeight());
}

int main()
{
	Rect* p1 = new Rect;
	Rect* p2 = new Rect;
	p1->setWidth(10);
	p1->setHeight(20);
	p2->setWidth(15);
	p2->setHeight(25);

	if (is_equal(*p1, *p2)) {
		cout << "같음." << endl;
	}
	else {
		cout << "다름." << endl;
	}

	delete p1;
	delete p2;
	return 0;
}