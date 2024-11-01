#include <iostream>
using namespace std;

class BankAccount {
private:
	string number;
	int balance; // BankAccount Ŭ������ ��� ���� ����
public:
	void init(string = "", int = 0); // �ʱ�ȭ �Լ� ���� ����
	void deposit(int amount); // �Ա� �Լ��� ���� ����
	void withdraw(int amount); // ��� �Լ��� ���� ����
	int getBalance(); // �ܾ��� �������� �Լ��� ���� ����
};

void BankAccount::init(string s, int n) {
	number = s;
	balance = n;
} // �ʱ�ȭ �Լ��� ����

void BankAccount::deposit(int amount) {
	balance += amount;
} // �Ա� �Լ��� ����

void BankAccount::withdraw(int amount) {
	balance -= amount;
} // ��� �Լ��� ����

int BankAccount::getBalance() {
	return balance;
} // ���� �ܾ��� �������� �Լ��� ����