#include <iostream>
using namespace std;

class BankAccount {
private:
	int balance;
	double rate;
public:
	BankAccount() {
		balance = 0;
		rate = 0.05;
	}
	BankAccount(int n, double m): balance(n), rate(m) {}

	void deposit(int mon) {
		balance += mon;
	}
	void withdraw(int mon) {
		balance -= mon;
	}
};
