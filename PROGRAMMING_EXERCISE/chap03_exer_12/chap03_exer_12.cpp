#include<iostream>
#include<string> // getline�� ����ϱ� ���� ����.
using namespace std;

int main() {
	int counter[256] = { 0 }; // ������ �迭 ���� �� �ʱ�ȭ
	string s;
	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, s); // ���ڿ��� �Է¹޾Ƽ� s�� ����.(string: ���ڿ� ��ü)

	for (int i = 0; i < s.size(); i++) {
		counter[s[i]]++;
	} // �� ���ڿ��� �ƽ�Ű�ڵ� ���� �޾Ƽ� counter�� �ش�Ǵ� �ε����� 1����.
	for (int i = 'a'; i <= 'z'; i++) {
		cout << (char)i << ": " << counter[i] << endl;
	} // a���� z���� ���鼭 �󵵼� ��ŭ ���.

	return 0;
}