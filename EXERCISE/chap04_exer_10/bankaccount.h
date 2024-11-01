#include <iostream>
using namespace std;

class BankAccount {
private:
	string number;
	int balance;
public:
	void init(string, int);
	void deposit(int amount);
	void withdraw(int amount);
	int getBalance();
};

void BankAccount::init(string s, int n) {
	number = s;
	balance = n;
}

void BankAccount::deposit(int amount) {
	balance += amount;
}

void BankAccount::withdraw(int amount) {
	balance -= amount;
}

int BankAccount::getBalance() {
	return balance;
}