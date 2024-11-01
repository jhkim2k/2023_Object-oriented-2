#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int, int);
};

Point::Point(int n=0, int m=0): x(n), y(m) {}
Point::~Point() {  }

int main() {
	Point p(100, 200);
}