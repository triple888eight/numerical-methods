#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <Windows.h>

using namespace std;

double f(double x) {
	double fx = (sqrt(2 * x + 3) * (x - 2)) / (x * x);
	//cout << "fx = " << fx << endl;
	return fx;
}

int main() {
	double x0 = 1;
	double k = 0;
	double x = 0;

	// задание в
	for (double dx = 0.1; dx < 2; dx += 0.1) {
		x = x0 + k * dx;
		double fxdx = (f(x + dx) - f(x)) / dx;
		cout << "x = " << x << " f(x) = " << round(fxdx * 10000) / 10000 << endl;
		k++;
	}

	cout << endl;
	x = 0;
	k = 0;

	// задание г
	for (double dx = 0.1; dx < 2; dx += 0.1) {
		x = x0 + k * dx;
		double fxdx = (f(x + dx) - f(x - dx)) / 2 * dx;
		cout << "x = " << x << " f(x) = " << round(fxdx * 10000) / 10000 << endl; // округление до 4 знаков
		k++;
	}

	cout << endl;
	x = 0;
	k = 0;

	// задание д
	for (double dx = 0.1; dx < 2; dx += 0.1) {
		x = x0 + k * dx;
		double fxdx = (f(x + dx) - 2 * f(x) + f(x - dx)) / 2 * dx;
		cout << "x = " << x << " f(x) = " << round(fxdx * 10000) / 10000 << endl; // округление до 4 знаков
		k++;
	}

	return 0;
}