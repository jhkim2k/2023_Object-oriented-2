#include<iostream>
using namespace std;

int main() {
    int n = 0, bets = 0;

    cout << "�ʱ� �ݾ� $50\n";
    cout << "��ǥ �ݾ� $250\n";
    
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
    cout << "1000���� " << n << "�� �¸�\n";
    cout << "�̱� Ȯ��= " << (double)n / 1000 * 100 << endl;
    cout << "��� ���� Ƚ�� = " << (double)bets / 1000 << endl;

    return 0;
}