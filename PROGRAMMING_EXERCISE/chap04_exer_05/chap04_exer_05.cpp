#include "dice.h" // �ʿ��� ������� �ҷ�����

int main() {
	Dice Dice; // ��ü ����

	srand((unsigned int)time(NULL)); // ������ �ֻ��� ���� ��� ���� �ð� �̿�

	cout << "�ֻ����� �� = " << Dice.roll() << endl;
	cout << "�ֻ����� �� = " << Dice.roll() << endl; // �ι� �ֻ����� ������ ���.
	
	return 0;
}