#include "Contact.h" // �ʿ��� ������� ��������.

int main() {
	string name;
	string tel;
	string search; // �Է¹��� ���� ����
	vector<Contact> con(3); // ũ�Ⱑ 3�� ���� ����

	for (auto& i : con) {
		cout << "�̸��� �Է��Ͻÿ�: ";
		cin >> name;
		cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
		cin >> tel;

		i = Contact(name, tel);
	} // ���� �̸��� ��ȭ��ȣ�� �Է� �޾� ����
	cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ� : ";
	cin >> search; // ����ڷκ��� �̸� �Է� �޴´�.

	for (auto i : con) {
		if (i.getName() == search) {
			cout << "��ȭ��ȣ : " << i.getTel() << endl;
			break;
		}
		else {
			cout << "���� �̸��Դϴ�." << endl;
			break;
		}
	} // ����ڷκ��� ���� �̸��� �ش�Ǵ� ��ȭ��ȣ ���.

	return 0; // ���α׷� ����
}