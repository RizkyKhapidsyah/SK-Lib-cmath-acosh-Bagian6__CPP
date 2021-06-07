#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019  */

#define PI 3.141592654

using namespace std;

int main() {
	double x = 13.21, result;
	result = acosh(x);

	cout << "acosh(x) = " << result << " radian" << endl;

	// result in degrees
	cout << "acosh(x) = " << result * 180 / PI << " degree" << endl;

	_getch();
	return 0;
}