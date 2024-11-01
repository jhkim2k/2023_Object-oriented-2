#include "Student.h" // 필요한 헤더 파일 가져오기

int main() {
	string name;
	double marks; // 사용자로부터 입력받을 변수 선언

	vector<Student> stu(3); // 크기가 3인 벡터 선언

	cout << "==========================" << endl;
	for (auto& i : stu) {
		cout << "이름: ";
		cin >> name;
		cout << "학점: ";
		cin >> marks;

		i = Student(name, marks);
	} // 각각 이름과 학점을 입력받는다.
	cout << "==========================" << endl;
	sort(stu.begin(), stu.end(), compare); // sort 알고리즘으로 정렬
	for (auto i : stu) {
		i.print();
	} // 정렬된 순으로 출력
	cout << "==========================" << endl;

	return 0; // 프로그램 종료
}