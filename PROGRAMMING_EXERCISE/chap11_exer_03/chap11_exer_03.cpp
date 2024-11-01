#include "Manager.h"

int main() {
	Manager a("±èÃ¶¼ö", 200, 100);

	cout << "ÀÌ¸§: " << a.getName() << endl;
	cout << "¿ù±Ş: " << a.getSalary() << endl;
	cout << "º¸³Ê½º: " << a.getBonus() << endl;
	a.computeSalary();

	return 0;
}