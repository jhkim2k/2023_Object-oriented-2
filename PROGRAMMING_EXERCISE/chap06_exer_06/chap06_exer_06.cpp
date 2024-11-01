#include "Contact.h" // 필요한 헤더파일 가져오기.

int main() {
	string name;
	string tel;
	string search; // 입력받을 변수 선언
	vector<Contact> con(3); // 크기가 3인 벡터 선언

	for (auto& i : con) {
		cout << "이름을 입력하시오: ";
		cin >> name;
		cout << "전화번호를 입력하시오: ";
		cin >> tel;

		i = Contact(name, tel);
	} // 각각 이름과 전화번호를 입력 받아 저장
	cout << "탐색하고 싶은 이름을 입력하시오 : ";
	cin >> search; // 사용자로부터 이름 입력 받는다.

	for (auto i : con) {
		if (i.getName() == search) {
			cout << "전화번호 : " << i.getTel() << endl;
			break;
		}
		else {
			cout << "없는 이름입니다." << endl;
			break;
		}
	} // 사용자로부터 받은 이름에 해당되는 전화번호 출력.

	return 0; // 프로그램 종료
}