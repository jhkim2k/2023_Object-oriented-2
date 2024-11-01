#include <iostream>
using namespace std;

class Box {
private:
	static int count;
	double length;
	double width;
	double height;
public:
	Box(double l = 2.0, double w = 2.0, double h = 2.0) {
		length = l;
		width = w;
		height = h;
		count++;
	}
	double Volume() {
		return length * width * height;
	}
	static int getCount() {
		return count;
	}
};

int Box::count = 0;

int main() {
	Box b1(1, 1, 1);
	Box b2(5, 2, 6);

	cout << "ÀüÃ¼ °´Ã¼ ¼ö: " << Box::getCount() << endl;

	return 0;
}