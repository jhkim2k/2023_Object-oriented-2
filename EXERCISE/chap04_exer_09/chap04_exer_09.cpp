#include "triangle.h"

int main() {
	Triangle tri;

	tri.setTri(3, 4);
	
	cout << "밑변이 3이고 높이가 4인 삼각형의 면적: " << tri.area() << endl;

	return 0;
}