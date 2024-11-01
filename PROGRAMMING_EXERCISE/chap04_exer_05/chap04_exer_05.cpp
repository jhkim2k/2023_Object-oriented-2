#include "dice.h" // 필요한 헤더파일 불러오기

int main() {
	Dice Dice; // 객체 생성

	srand((unsigned int)time(NULL)); // 랜덤한 주사위 값을 얻기 위해 시간 이용

	cout << "주사위의 값 = " << Dice.roll() << endl;
	cout << "주사위의 값 = " << Dice.roll() << endl; // 두번 주사위를 굴리고 출력.
	
	return 0;
}