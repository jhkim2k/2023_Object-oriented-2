#include <iostream>
using namespace std;

class HomeAppliance {
	int price;
public:
	HomeAppliance(int p) : price(p) {}
	virtual double getPrice() = 0;
};

double HomeAppliance::getPrice() {
	return price;
}

class Television : public HomeAppliance {
public:
	Television(int p) : HomeAppliance(p) {}
	double getPrice() {
		return HomeAppliance::getPrice() * 0.9;
	}
};

class Refrigerator : public HomeAppliance {
public:
	Refrigerator(int p) : HomeAppliance(p) {}
	double getPrice() {
		return HomeAppliance::getPrice() * 0.95;
	}
};

int main() {
	Television t(2000);
	Refrigerator r(2000);

	cout << "가격: " << t.getPrice() << endl;
	cout << "가격: " << r.getPrice() << endl;

	return 0;
}