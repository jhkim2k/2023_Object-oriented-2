#include<iostream>
using namespace std;

int main()
{
	int f;
	float c; // �� �ڷ������� ���� ����.

	for (f = 0; f <= 10; f++) { // 10�� �ݺ��ϴ� �ݺ��� 
		c = (f * 10 - 32.0) * 5.0 / 9.0; 
		cout << f * 10 << "    " << c << endl; // �� ����ؼ� �� ���� ���(10��)
	}
	return 0;
}