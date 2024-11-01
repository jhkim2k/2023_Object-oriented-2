#include<iostream>
#include<string> // getline을 쓰기 위하여 선언.
using namespace std;

int main() {
    string pw; // 문자열 변수선언
    int small = 0, big = 0, number = 0; // 정수형 변수 선언 및 초기화

    cout << "암호를 입력하시오: ";
    getline(cin, pw); // 사용자로부터 pw에 문자열을 입력받는다.

    for (int i = 0; i < pw.length(); i++) { // 입력받은 문자열의 길이만큼 반복.
        if (pw[i] >= 'a' && pw[i] <= 'z')
            small = 1; // 소문자가 있다면 small에 1 대입
        else if (pw[i] >= 'A' && pw[i] <= 'Z')
            big = 1; // 대문자가 있다면 big에 1 대입
        else if (pw[i] >= '0' && pw[i] <= '9')
            number = 1; // 숫자가 있다면 number에 1 대입
    }

    if ((small && big && number) == 1) {
        cout << "안전합니다." << endl;
    } // small, big, number이 모두 1이라면(AND 연산, 소문자, 대문자, 숫자가 모두 있다면) 메시지 출력
    else {
        cout << "안전하지 않습니다." << endl;
    } // 위의 조건을 만족하지 않는다면 메시지 출력

    return 0;
}