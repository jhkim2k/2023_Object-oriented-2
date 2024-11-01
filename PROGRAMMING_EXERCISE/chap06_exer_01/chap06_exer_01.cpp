#include <iostream>
#include <vector> // 벡터를 사용하기 위해 선언
using namespace std;

int main() {
	int size = 0;
	// int max = 0;
	// int min = 0;
	int max, min;

	cout << "정수의 개수: ";
	cin >> size; 

	vector<int> vec(size);
	
	for (auto& i : vec) {
		cout << "정수를 입력하시오: ";
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

	cout << "최대값: " << max << endl;
	cout << "최솟값: " << min << endl;

	return 0;
}