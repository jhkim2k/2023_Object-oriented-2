#include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1;

    cout << "몇 항까지 구할까요: ";
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