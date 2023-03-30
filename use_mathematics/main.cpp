#include "mathematics.h"
#include <iostream>

using namespace std;

int main() {
	cout << "*****************************\n";
	cout << "*      USE MATHEMATICS      *\n";
	cout << "*****************************\n" << endl;

	double a = 7.4;
	int b = 99;

	Mathematics math;
	cout << math.add(a, b) << endl;

	cout << "\nEnd" << endl;
	return EXIT_SUCCESS;
}
