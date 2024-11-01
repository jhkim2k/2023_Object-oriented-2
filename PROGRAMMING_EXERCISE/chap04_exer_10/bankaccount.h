#include <iostream>
using namespace std;

class BankAccount {
private:
	string number;
	int balance; // BankAccount 클래스의 멤버 변수 선언
public:
	void init(string = "", int = 0); // 초기화 함수 원형 선언
	void deposit(int amount); // 입금 함수의 원형 선언
	void withdraw(int amount); // 출금 함수의 원형 선언
	int getBalance(); // 잔액을 가져오는 함수의 원형 선언
};

void BankAccount::init(string s, int n) {
	number = s;
	balance = n;
} // 초기화 함수의 구현

void BankAccount::deposit(int amount) {
	balance += amount;
} // 입금 함수의 구현

void BankAccount::withdraw(int amount) {
	balance -= amount;
} // 출금 함수의 구현

int BankAccount::getBalance() {
	return balance;
} // 현재 잔액을 가져오는 함수의 구현