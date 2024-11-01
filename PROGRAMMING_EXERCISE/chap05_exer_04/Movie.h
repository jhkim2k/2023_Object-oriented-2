#include <iostream>
using namespace std;

class Movie {
private:
	string title;
	string director;
	double rating; // Movie Ŭ������ ��� ���� ����
public:
	string getTitle() { return title; }
	string getDirector() { return director; }
	double getRating() { return rating; } // �� ��� ���� ������ ����
	void setTitle(string t) { title = t; }
	void setDirector(string d) { director = d; }
	void setRating(double r) { rating = r; } // �� ��� ���� ������ ����

	Movie(string t, string d, double r = 0) : title(t), director(d), rating(r) {}
	Movie() { title = ""; director = ""; rating = 0; } // ������ �ߺ� ����
};