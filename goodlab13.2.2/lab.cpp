#include <iostream>
#include <cmath>
#include "math.h"

#define MacroC (h(s * s, 1 + t) + h(1, s * t)) / 1 + h(s, t) * h(s, t)

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
