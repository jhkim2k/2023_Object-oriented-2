#include "Shape.h"

class Circle : public Shape {
	int radius;
public:
	Circle(int r) : radius(r) {}
	double getArea() {
		return radius * radius * 3.14;
	}
};