#include<iostream>
#include<string> // getline�� ���� ���Ͽ� ����.
using namespace std;

int main() {
    string pw; // ���ڿ� ��������
    int small = 0, big = 0, number = 0; // ������ ���� ���� �� �ʱ�ȭ

    cout << "��ȣ�� �Է��Ͻÿ�: ";
    getline(cin, pw); // ����ڷκ��� pw�� ���ڿ��� �Է¹޴´�.

    for (int i = 0; i < pw.length(); i++) { // �Է¹��� ���ڿ��� ���̸�ŭ �ݺ�.
        if (pw[i] >= 'a' && pw[i] <= 'z')
            small = 1; // �ҹ��ڰ� �ִٸ� small�� 1 ����
        else if (pw[i] >= 'A' && pw[i] <= 'Z')
            big = 1; // �빮�ڰ� �ִٸ� big�� 1 ����
        else if (pw[i] >= '0' && pw[i] <= '9')
            number = 1; // ���ڰ� �ִٸ� number�� 1 ����
    }

    if ((small && big && number) == 1) {
        cout << "�����մϴ�." << endl;
    } // small, big, number�� ��� 1�̶��(AND ����, �ҹ���, �빮��, ���ڰ� ��� �ִٸ�) �޽��� ���
    else {
        cout << "�������� �ʽ��ϴ�." << endl;
    } // ���� ������ �������� �ʴ´ٸ� �޽��� ���

    return 0;
}