#include "bankaccount.h" // �ʿ��� ������� ��������

int main() {
	BankAccount ba; // ��ü ����

	ba.init("01012100", 1000000); // ��ü �ʱ�ȭ
	cout << "���� �ܾ�: " << ba.getBalance() << endl; // ���� �ܾ� ���

	ba.deposit(1000000);
	cout << "after deposit(1000000) ���� �ܾ�: " << ba.getBalance() << endl; // 1000000 �Ա� �� ���� �ܾ� ���

	ba.withdraw(1000000);
	cout << "after withdraw(1000000) ���� �ܾ�: " << ba.getBalance() << endl; // 1000000 ��� �� ���� �ܾ� ���
	
	return 0;
}
