#include<iostream>
using namespace std;

int main() {
    int n = 0, bets = 0; // 변수 두개 선언

    cout << "초기 금액 $50\n";
    cout << "목표 금액 $250\n"; // 사용자가 이해하도록 문장 출력.
    
    for (int i = 0; i < 1000; i++) { // 1000번 반복하는 반복문
        int cash = 50; // cash의 값을 50으로 초기화하여 선언.
        while (cash > 0 && cash < 250) { // cash 값이 0보다 크고 250보다 작을때(AND)
            bets++; // bets값 1증가.
            if ((double)rand() / RAND_MAX < 0.5) { // 0.5의 확률로 도박.
                cash++; // 도박 이기면 돈 증가.
            }
            else
                cash--; // 도박 지면 돈 감소.
        }
        if (cash > 100) // cash의 값이 100보다 크다면
            n++; // n 1증가.
    }
    cout << "1000중의 " << n << "번 승리\n";
    cout << "이긴 확률= " << (double)n / 1000 * 100 << endl;
    cout << "평균 베팅 횟수 = " << (double)bets / 1000 << endl; // 최종 결과들 출력

    return 0;
}