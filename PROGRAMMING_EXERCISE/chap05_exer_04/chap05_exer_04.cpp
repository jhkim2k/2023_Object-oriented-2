#include "Movie.h" // �ʿ��� ��� ���� ��������

int main() {
	Movie movie1;
	Movie movie2; // ��ü ����

	movie1.setTitle("Ÿ��Ÿ��");
	movie1.setDirector("���ӽ� ī�޷�");
	movie1.setRating(9.5);

	movie2.setTitle("��������");
	movie2.setDirector("�� ����");
	movie2.setRating(8.34); // �� ��ü�� ������ ����Ͽ� �� �ֱ�.

	cout << "��ȭ #1" << endl;
	cout << "��ȭ ����: " << movie1.getTitle() << endl;
	cout << "��ȭ ����: " << movie1.getDirector() << endl;
	cout << "��ȭ ����: " << movie1.getRating() << endl; // ��ȭ ����, ����, ���� ���� ������ �� ���

	cout << "\n��ȭ #2" << endl;
	cout << "��ȭ ����: " << movie2.getTitle() << endl;
	cout << "��ȭ ����: " << movie2.getDirector() << endl;
	cout << "��ȭ ����: " << movie2.getRating() << endl; // ��ȭ ����, ����, ���� ���� ������ �� ���

	return 0;
}