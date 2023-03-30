#include "power.h"
#include <iostream>

using namespace std;

int main() {
	cout << "***********************\n";
	cout << "*      USE POWER      *\n";
	cout << "***********************\n" << endl;

	double a = 5;

	Power pow;
	cout << pow.square(a) << endl;

	cout << "\nEnd" << endl;
	return EXIT_SUCCESS;
}
