#include <iostream>
#include <vector> // ���͸� ����ϱ� ���� ����
using namespace std;

int main() {
	int size = 0;
	// int max = 0;
	// int min = 0;
	int max, min;

	cout << "������ ����: ";
	cin >> size; 

	vector<int> vec(size);
	
	for (auto& i : vec) {
		cout << "������ �Է��Ͻÿ�: ";
		cin >> i;
	}

	min = max = vec.front();

	for (auto& i : vec) {
		if (max < i) {
			max = i;
		}
		else if (min > i) {
			min = i;
		}
	}

	cout << "�ִ밪: " << max << endl;
	cout << "�ּڰ�: " << min << endl;

	return 0;
}