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
	int getWidth() const { return width; }
	int getHeight() const { return height; }

	int getArea() const { return width * height; }
	int getPerimeter() const { return 2 * (width + height); }
};

int main()
{
	Rect* p = new Rect;
	


	delete p;
	return 0;
}