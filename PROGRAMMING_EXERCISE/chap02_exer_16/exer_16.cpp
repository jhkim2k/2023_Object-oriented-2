#include<iostream>
using namespace std;

int main() {
    int n = 0, bets = 0; // ���� �ΰ� ����

    cout << "�ʱ� �ݾ� $50\n";
    cout << "��ǥ �ݾ� $250\n"; // ����ڰ� �����ϵ��� ���� ���.
    
    for (int i = 0; i < 1000; i++) { // 1000�� �ݺ��ϴ� �ݺ���
        int cash = 50; // cash�� ���� 50���� �ʱ�ȭ�Ͽ� ����.
        while (cash > 0 && cash < 250) { // cash ���� 0���� ũ�� 250���� ������(AND)
            bets++; // bets�� 1����.
            if ((double)rand() / RAND_MAX < 0.5) { // 0.5�� Ȯ���� ����.
                cash++; // ���� �̱�� �� ����.
            }
            else
                cash--; // ���� ���� �� ����.
        }
        if (cash > 100) // cash�� ���� 100���� ũ�ٸ�
            n++; // n 1����.
    }
    cout << "1000���� " << n << "�� �¸�\n";
    cout << "�̱� Ȯ��= " << (double)n / 1000 * 100 << endl;
    cout << "��� ���� Ƚ�� = " << (double)bets / 1000 << endl; // ���� ����� ���

    return 0;
}