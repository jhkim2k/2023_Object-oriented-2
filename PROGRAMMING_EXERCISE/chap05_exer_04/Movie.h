#include <iostream>
using namespace std;

class Movie {
private:
	string title;
	string director;
	double rating; // Movie 클래스의 멤버 변수 선언
public:
	string getTitle() { return title; }
	string getDirector() { return director; }
	double getRating() { return rating; } // 각 멤버 변수 접근자 선언
	void setTitle(string t) { title = t; }
	void setDirector(string d) { director = d; }
	void setRating(double r) { rating = r; } // 각 멤버 변수 설정자 선언

	Movie(string t, string d, double r = 0) : title(t), director(d), rating(r) {}
	Movie() { title = ""; director = ""; rating = 0; } // 생성자 중복 정의
};