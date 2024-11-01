#include <iostream>
using namespace std;

class Sum {
	int n1, n2;
public:
	void init(int, int);
	int add();
};

void Sum::init(int x, int y) {
	n1 = x;
	n2 = y;
}

int Sum::add() {
	return n1 + n2;
}