#include<iostream>
using namespace std;

int main() {
    int n = 0, bets = 0;

    cout << "초기 금액 $50\n";
    cout << "목표 금액 $250\n";
    
    for (int i = 0; i < 1000; i++) {
        int cash = 50;
        while (cash > 0 && cash < 250) {
            bets++;
            if ((double)rand() / RAND_MAX < 0.5) {
                cash++;
            }
            else
                cash--;
        }
        if (cash > 100)
            n++;
    }
    cout << "1000중의 " << n << "번 승리\n";
    cout << "이긴 확률= " << (double)n / 1000 * 100 << endl;
    cout << "평균 베팅 횟수 = " << (double)bets / 1000 << endl;

    return 0;
}