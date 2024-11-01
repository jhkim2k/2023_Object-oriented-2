#include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1; // 정수 변수 3개 선언

    cout << "몇 항까지 구할까요: ";
    cin >> n; // 사용자부터 변수 입력받음.

    if (n >= 1) {
        cout << a << " ";
    } // 입력받은 값 비교하여 true라면 a 출력

    if (n >= 2) {
        cout << b << " ";
    } // 입력받은 값 비교하여 true라면 b 출력

    for (int i = 3; i <= n; ++i) { // 3부터 입력받은 숫자까지 반복.
        int c = a + b;
        cout << c << " "; // c는 이전 항인 a,b의 합으로 출력(피보나치)
        a = b;
        b = c; // 숫자를 하나씩 이동(다음 항을 위해)
    }

    cout << endl; // 한줄 띄우기.
    return 0;
}