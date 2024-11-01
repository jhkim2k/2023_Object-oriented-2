#include<iostream>
using namespace std;

int main()
{
	int f;
	float c;

	for (f = 0; f <= 10; f++) {
		c = (f * 10 - 32.0) * 5.0 / 9.0;
		cout << f * 10 << "    " << c << endl;
	}
	return 0;
}