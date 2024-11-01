#include <iostream>
#include <string>
#include <vector> // �ʿ��� ������� ����

using namespace std;

class Contact {
private:
	string name;
	string tel; // Contact Ŭ������ ��� ���� ����
public:
	Contact() : name(""), tel("") {}
	Contact(string n, string t) : name(n), tel(t) {} // ������ �ߺ� ����

	string getName() { return name; }
	string getTel() { return tel; } // ������ �Լ� ����
};