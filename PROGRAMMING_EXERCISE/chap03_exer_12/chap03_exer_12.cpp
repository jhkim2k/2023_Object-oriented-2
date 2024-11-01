#include<iostream>
#include<string> // getline을 사용하기 위해 선언.
using namespace std;

int main() {
	int counter[256] = { 0 }; // 정수형 배열 선언 및 초기화
	string s;
	cout << "문자열을 입력하시오: ";
	getline(cin, s); // 문자열을 입력받아서 s에 대입.(string: 문자열 객체)

	for (int i = 0; i < s.size(); i++) {
		counter[s[i]]++;
	} // 각 문자열의 아스키코드 값을 받아서 counter의 해당되는 인덱스에 1증가.
	for (int i = 'a'; i <= 'z'; i++) {
		cout << (char)i << ": " << counter[i] << endl;
	} // a부터 z까지 가면서 빈도수 만큼 출력.

	return 0;
}