#include <iostream>
using namespace std;

template <typename T>
T getAverage(T arr[], int n) {
	
	T avg = 0;
	
	for (int i = 0; i < n; i++) {
		avg += arr[i];
	}

	return avg / n;
}

int main() {
	double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	double n = getAverage(list, 5);

	cout << "Æò±Õ°ª: " << n << endl;

	return 0;
}