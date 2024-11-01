#include <iostream>
#include <ctime>
using namespace std;

class Dice {
	int face = 1; // Dice 클래스의 멤버변수의 선언 및 초기화(주사위이므로 초기값은 1로 설정함)
public:
	int roll(); // 주사위 굴리기 함수의 원형
};

int Dice::roll() {
	face = (int)(rand() % 6 + 1);
	return face;
} // 1부터 6까지의 랜덤한 숫자를 발생시켜서 face변수에 대입하고, return하는 함수 구현(주사위 굴리기)
