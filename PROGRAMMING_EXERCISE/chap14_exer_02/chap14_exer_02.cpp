#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int com = 0;
	string use;

	srand(time(0));
	com = rand() % 3;

	try {
		cout << "가위, 바위, 보 게임입니다.";
		cout << "무엇을 내시겠습니까: ";
		cin >> use;

		if (!(use == "가위" || use == "바위" || use == "보")) {
			throw "오류: \"가위\", \"바위\", \"보\" 중에서만 선택하세요.";
		}
		else {
			if (use == "가위") {
				if (com == 0) {
					cout << "컴퓨터가 이겼습니다." << endl;
				}
				else if (com == 1) {
					cout << "비겼습니다." << endl;
				}
				else {
					cout << "사용자가 이겼습니다." << endl;
				}
			}
			else if (use == "바위") {
				if (com == 0) {
					cout << "비겼습니다." << endl;
				}
				else if (com == 1) {
					cout << "사용자가 이겼습니다." << endl;
				}
				else {
					cout << "컴퓨터가 이겼습니다." << endl;
				}
			}
			else {
				if (com == 0) {
					cout << "사용자가 이겼습니다." << endl;
				}
				else if (com == 1) {
					cout << "컴퓨터가 이겼습니다." << endl;
				}
				else {
					cout << "비겼습니다." << endl;
				}
			}
		}
	}
	catch (const char *a) {
		cout << a << endl;
	}
	return 0;
}