#include <iostream>
#include <ctime>
using namespace std;

class Dice {
	int face = 1; // Dice Ŭ������ ��������� ���� �� �ʱ�ȭ(�ֻ����̹Ƿ� �ʱⰪ�� 1�� ������)
public:
	int roll(); // �ֻ��� ������ �Լ��� ����
};

int Dice::roll() {
	face = (int)(rand() % 6 + 1);
	return face;
} // 1���� 6������ ������ ���ڸ� �߻����Ѽ� face������ �����ϰ�, return�ϴ� �Լ� ����(�ֻ��� ������)
