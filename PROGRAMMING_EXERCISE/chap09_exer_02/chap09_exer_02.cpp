#include <iostream>
using namespace std;

class Line {
public:
	int getLength( void );
	Line(int len);
	Line(const Line& other);
	~Line();

private:
	int* ptr;
};

Line::Line(int len) {
	cout << "일반 생성자" << endl;
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line& other) {
	cout << "복사 생성자" << endl;
	ptr = new int;
	*ptr = *(other.ptr);
}

Line::~Line() {
	delete ptr;
}

int Line::getLength(void) {
	return *ptr;
}

int main() {
	Line line1(10);
	Line line2 = line1;

	cout << "선의 길이: " << line1.getLength() << endl;
	cout << "선의 길이: " << line2.getLength() << endl;

	return 0;
}