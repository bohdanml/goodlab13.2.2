#include <iostream>
#include <cmath>
#include "math.h"

using namespace std;
double h(const double a, const double b);
int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = MacroC;
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b)
{
	return (a + b + (a * a) * (b * b)) / ((a * a) + (b * b));
}