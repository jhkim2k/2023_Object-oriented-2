#include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1; // ���� ���� 3�� ����

    cout << "�� �ױ��� ���ұ��: ";
    cin >> n; // ����ں��� ���� �Է¹���.

    if (n >= 1) {
        cout << a << " ";
    } // �Է¹��� �� ���Ͽ� true��� a ���

    if (n >= 2) {
        cout << b << " ";
    } // �Է¹��� �� ���Ͽ� true��� b ���

    for (int i = 3; i <= n; ++i) { // 3���� �Է¹��� ���ڱ��� �ݺ�.
        int c = a + b;
        cout << c << " "; // c�� ���� ���� a,b�� ������ ���(�Ǻ���ġ)
        a = b;
        b = c; // ���ڸ� �ϳ��� �̵�(���� ���� ����)
    }

    cout << endl; // ���� ����.
    return 0;
}