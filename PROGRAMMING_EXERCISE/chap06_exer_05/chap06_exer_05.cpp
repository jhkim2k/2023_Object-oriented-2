#include "Student.h" // �ʿ��� ��� ���� ��������

int main() {
	string name;
	double marks; // ����ڷκ��� �Է¹��� ���� ����

	vector<Student> stu(3); // ũ�Ⱑ 3�� ���� ����

	cout << "==========================" << endl;
	for (auto& i : stu) {
		cout << "�̸�: ";
		cin >> name;
		cout << "����: ";
		cin >> marks;

		i = Student(name, marks);
	} // ���� �̸��� ������ �Է¹޴´�.
	cout << "==========================" << endl;
	sort(stu.begin(), stu.end(), compare); // sort �˰������� ����
	for (auto i : stu) {
		i.print();
	} // ���ĵ� ������ ���
	cout << "==========================" << endl;

	return 0; // ���α׷� ����
}