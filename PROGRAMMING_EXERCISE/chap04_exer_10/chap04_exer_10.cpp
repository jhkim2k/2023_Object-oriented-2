#include "bankaccount.h" // 필요한 헤더파일 가져오기

int main() {
	BankAccount ba; // 객체 생성

	ba.init("01012100", 1000000); // 객체 초기화
	cout << "현재 잔액: " << ba.getBalance() << endl; // 현재 잔액 출력

	ba.deposit(1000000);
	cout << "after deposit(1000000) 현재 잔액: " << ba.getBalance() << endl; // 1000000 입금 후 현재 잔액 출력

	ba.withdraw(1000000);
	cout << "after withdraw(1000000) 현재 잔액: " << ba.getBalance() << endl; // 1000000 출금 후 현재 잔액 출력
	
	return 0;
}
