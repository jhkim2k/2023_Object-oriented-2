#include<iostream>
#include<string>
using namespace std;

int main() {
    string pw;
    int small = 0, big = 0, number = 0;

    cout << "��ȣ�� �Է��Ͻÿ�: ";
    getline(cin, pw);

    for (int i = 0; i < pw.length(); i++) {
        if (pw[i] >= 'a' && pw[i] <= 'z')
            small = 1;
        else if (pw[i] >= 'A' && pw[i] <= 'Z')
            big = 1;
        else if (pw[i] >= '0' && pw[i] <= '9')
            number = 1;
    }

    if ((small && big && number) == 1) {
        cout << "�����մϴ�." << endl;
    }
    else {
        cout << "�������� �ʽ��ϴ�." << endl;
    }

    return 0;
}