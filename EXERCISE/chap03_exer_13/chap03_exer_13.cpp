#include<iostream>
#include<string>
using namespace std;

int main() {
    string pw;
    int small = 0, big = 0, number = 0;

    cout << "암호를 입력하시오: ";
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
        cout << "안전합니다." << endl;
    }
    else {
        cout << "안전하지 않습니다." << endl;
    }

    return 0;
}