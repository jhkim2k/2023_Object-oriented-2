#include "Movie.h" // 필요한 헤더 파일 가져오기

int main() {
	Movie movie1;
	Movie movie2; // 객체 생성

	movie1.setTitle("타이타닉");
	movie1.setDirector("제임스 카메룬");
	movie1.setRating(9.5);

	movie2.setTitle("지오스톰");
	movie2.setDirector("딘 데블린");
	movie2.setRating(8.34); // 각 객체에 설정자 사용하여 값 넣기.

	cout << "영화 #1" << endl;
	cout << "영화 제목: " << movie1.getTitle() << endl;
	cout << "영화 감독: " << movie1.getDirector() << endl;
	cout << "영화 평점: " << movie1.getRating() << endl; // 영화 제목, 감독, 평점 변수 각각의 값 출력

	cout << "\n영화 #2" << endl;
	cout << "영화 제목: " << movie2.getTitle() << endl;
	cout << "영화 감독: " << movie2.getDirector() << endl;
	cout << "영화 평점: " << movie2.getRating() << endl; // 영화 제목, 감독, 평점 변수 각각의 값 출력

	return 0;
}