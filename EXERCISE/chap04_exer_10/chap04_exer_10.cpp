#include "bankaccount.h"

int main() {
	BankAccount ba;

	ba.init("01012100", 1000000);
	cout << "���� �ܾ�: " << ba.getBalance() << endl;

	ba.deposit(1000000);
	cout << "after deposit(1000000) ���� �ܾ�: " << ba.getBalance() << endl;

	ba.withdraw(1000000);
	cout << "after withdraw(1000000) ���� �ܾ�: " << ba.getBalance() << endl;
	
	return 0;
}