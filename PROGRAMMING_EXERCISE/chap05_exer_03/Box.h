#include <iostream>
using namespace std;

class Box {
private:
	int length;
	int width;
	int height; // Box Ŭ������ ��� ���� ����
	bool boolean; // �ڽ��� ������� �Ⱥ������ �˱� ���� bool Ÿ�� ���� ����
public:
	int getLength() { return length; }
	int getWidth() { return width; }
	int getHeight() { return height; } // �� ��� ���� ������ �Լ� ����
	void setLength(int l) { length = l; }
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	bool setBoolean() { return boolean; } // �� ��� ���� ������ �Լ� ����
	void setBoolean(bool b) { boolean = b; } // bool ���� ������ �Լ� ����

	Box(int n = 0, int m = 0, int h = 0) : length(n), width(m), height(h) {}
	Box() { length = 0; width = 0; height = 0; } // ������ �ߺ� ����

	void empty();
	int getVolume();
	void print(); // �� �Լ��� ���� ����
};

void Box::empty() {
	if (length * width * height == 0) {
		boolean = true;
	}
	else {
		boolean = false;
	}
} // �ڽ��� ����ִ��� �ƴ��� �Ǵ��ϴ� �Լ��� ����

int Box::getVolume() {
	return length * width * height;
} // �ڽ� ���Ǹ� ����ϴ� �Լ��� ����

void Box::print() {
	cout << "������ ����: " << length << endl;
	cout << "������ �ʺ�: " << width << endl;
	cout << "������ ����: " << height << endl;
	cout << "������ ����: " << getVolume() << endl;
} // ����, �ʺ�, ���̿� �ڽ� ���Ǹ� ����ϴ� �Լ��� ����