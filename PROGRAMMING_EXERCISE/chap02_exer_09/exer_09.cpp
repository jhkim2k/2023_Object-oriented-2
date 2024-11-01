#include<iostream>
using namespace std;

int main()
{
	int f;
	float c; // 각 자료형별로 변수 선언.

	for (f = 0; f <= 10; f++) { // 10번 반복하는 반복문 
		c = (f * 10 - 32.0) * 5.0 / 9.0; 
		cout << f * 10 << "    " << c << endl; // 식 계산해서 각 변수 출력(10번)
	}
	return 0;
}