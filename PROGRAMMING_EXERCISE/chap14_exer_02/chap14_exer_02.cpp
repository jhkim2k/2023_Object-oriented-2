#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int com = 0;
	string use;

	srand(time(0));
	com = rand() % 3;

	try {
		cout << "����, ����, �� �����Դϴ�.";
		cout << "������ ���ðڽ��ϱ�: ";
		cin >> use;

		if (!(use == "����" || use == "����" || use == "��")) {
			throw "����: \"����\", \"����\", \"��\" �߿����� �����ϼ���.";
		}
		else {
			if (use == "����") {
				if (com == 0) {
					cout << "��ǻ�Ͱ� �̰���ϴ�." << endl;
				}
				else if (com == 1) {
					cout << "�����ϴ�." << endl;
				}
				else {
					cout << "����ڰ� �̰���ϴ�." << endl;
				}
			}
			else if (use == "����") {
				if (com == 0) {
					cout << "�����ϴ�." << endl;
				}
				else if (com == 1) {
					cout << "����ڰ� �̰���ϴ�." << endl;
				}
				else {
					cout << "��ǻ�Ͱ� �̰���ϴ�." << endl;
				}
			}
			else {
				if (com == 0) {
					cout << "����ڰ� �̰���ϴ�." << endl;
				}
				else if (com == 1) {
					cout << "��ǻ�Ͱ� �̰���ϴ�." << endl;
				}
				else {
					cout << "�����ϴ�." << endl;
				}
			}
		}
	}
	catch (const char *a) {
		cout << a << endl;
	}
	return 0;
}