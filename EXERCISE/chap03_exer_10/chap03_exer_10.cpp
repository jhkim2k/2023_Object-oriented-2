#include<iostream>
#include<time.h>
using namespace std;

int flip();

int main() {
	int front = 0;
	int back = 0;

	for (int i = 0; i < 100; i++) {
		if (flip()) {
			front++;
		}
		else {
			back++;
		}
	}
	cout << "동전의 앞면: " << front << endl;
	cout << "동전의 뒷면: " << back << endl;
	return 0;
}

int flip() {
	return rand() % 2;
}