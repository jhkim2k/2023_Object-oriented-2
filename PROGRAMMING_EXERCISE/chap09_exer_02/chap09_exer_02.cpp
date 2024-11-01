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
	cout << "�Ϲ� ������" << endl;
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line& other) {
	cout << "���� ������" << endl;
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

	cout << "���� ����: " << line1.getLength() << endl;
	cout << "���� ����: " << line2.getLength() << endl;

	return 0;
}