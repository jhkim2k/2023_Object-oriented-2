#include <iostream>
using namespace std;

template <typename T>
T getSmallest(const T arr[], int size) {

    T num = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < num) {
            num = arr[i];
        }
    }

    return num;
}

int main() {
    double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    int size = 5;

    double num = getSmallest(list, size);
    cout << "가장 작은 값: " << num << std::endl;

    return 0;
}
