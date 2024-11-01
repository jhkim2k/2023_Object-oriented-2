#include<iostream>
using namespace std;

int flip();

int main() {
	int front = 0;
	int back = 0; // 변수 2개 선언과 초기화

	for (int i = 0; i < 100; i++) { // 100번 반복
		if (flip()) { // filp 함수가 1,0에 따라 조건 바뀜.
			front++;
		}
		else {
			back++;
		} // 1 또는 0에 따라 변수 둘중에 하나의 값 1증가.
	}
	cout << "동전의 앞면: " << front << endl;
	cout << "동전의 뒷면: " << back << endl; // 결과 출력
	return 0;
}

int flip() {
	return rand() % 2;
} // 랜덤하게 1 또는 0 return