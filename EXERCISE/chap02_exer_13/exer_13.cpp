#include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1;

    cout << "�� �ױ��� ���ұ��: ";
    cin >> n;

    if (n >= 1) {
        cout << a << " ";
    }

    if (n >= 2) {
        cout << b << " ";
    }

    for (int i = 3; i <= n; ++i) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}