//********************************************************************
// Complex Numbers
// 
// Author: 
//
// Description: This program will deal with complex numbers to correctly
// output, find correct quadrant, find the magnitude, see which complex
// number is less than, conjugate, have one complex number equal a 
// different one, complex number multiplied by int, complex number
// multiplied by another complex number, add two complex numbers,
// and subtract two complex numbers.
//
//********************************************************************
#include <iostream>
using namespace std;
#include "ComplexClass.h"

int main() {

	ComplexNumber test;
	ComplexNumber test2(3, 4); // quad 1
	ComplexNumber test3(5, -3); // quad 4
	ComplexNumber test4(-2, 1); // quad 2
	ComplexNumber test5(-8, -9); // quad 3

	// Checking cout works
	cout << "Cout test: " << test << endl;
	cout << "Cout test2: " << test2 << endl;
	cout << "Cout test3: " << test3 << endl;
	cout << "Cout test4: " << test4 << endl;
	cout << "Cout test5: " << test5 << endl;
	cout << endl;

	// Tests to see if get location works
	cout << "Quad: " << test.get_Location() << endl;
	cout << "Quad: " << test2.get_Location() << endl;
	cout << "Quad: " << test3.get_Location() << endl;
	cout << "Quad: " << test4.get_Location() << endl;
	cout << "Quad: " << test5.get_Location() << endl;
	cout << endl;

	// Magnitude
	cout << "Magnitude: " << test.get_Magnitude() << endl;
	cout << "Magnitude: " << test2.get_Magnitude() << endl;
	cout << "Magnitude: " << test3.get_Magnitude() << endl;
	cout << "Magnitude: " << test4.get_Magnitude() << endl;
	cout << "Magnitude: " << test5.get_Magnitude() << endl;
	cout << endl;

	// <
	if (test < test2) {
		cout << "test is less than test2" << endl;
		cout << endl;
	}
	else {
		cout << "test is not less than test2" << endl;
		cout << endl;
	}
	if (test3 < test4) {
		cout << "test3 is less than test4" << endl;
		cout << endl;
	}
	else {
		cout << "test3 is not less than test4" << endl;
		cout << endl;
	}

	//Conjugate
	test.Conjugate();
	test2.Conjugate();
	test3.Conjugate();
	test4.Conjugate();
	test5.Conjugate();
	cout << "Conjugate: " << test << endl;
	cout << "Conjugate: " << test2 << endl;
	cout << "Conjugate: " << test3 << endl;
	cout << "Conjugate: " << test4 << endl;
	cout << "Conjugate: " << test5 << endl;
	cout << endl;

	// = operator
	cout << "test: " << test << endl;
	cout << "test2: " << test2 << endl;
	cout << "test3: " << test3 << endl;
	cout << "test4: " << test4 << endl;
	test = test2;
	test3 = test4;
	cout << "test = test2 operator: " << test << endl;
	cout << "test3 = test4 operator: " << test3 << endl;
	cout << endl;


	// int * complex number
	cout << "Int 3 * Complex test: " << 3 * test << endl;
	cout << "Int 3 * Complex test2: " << 3 * test2 << endl;
	cout << "Int 5 * Complex test3: " << 5 * test3 << endl;
	cout << "Int 1 * Complex test4: " << 1 * test4 << endl;
	cout << "Int 10 * Complex test5: " << 10 * test5 << endl;
	cout << endl;

	// complex * complex

	ComplexNumber c;
	ComplexNumber c2(3, 4); 
	ComplexNumber c3(5, -3);
	ComplexNumber c4(-2, 1);
	ComplexNumber c5(-8, -9);

	cout << "Cout c: " << c << endl;
	cout << "Cout c2: " << c2 << endl;
	cout << "Cout c3: " << c3 << endl;
	cout << "Cout c4: " << c4 << endl;
	cout << "Cout c5: " << c5 << endl;
	cout << endl;

	cout << "Complex c * Complex c: " << c * c << endl;
	cout << "Complex c * Complex c2: " << c * c2 << endl;
	cout << "Complex c2 * Complex c3: " << c2 * c3 << endl;
	cout << "Complex c2 * Complex c4: " << c2 * c4 << endl;
	cout << "Complex c4 * Complex c5: " << c4 * c5 << endl;
	cout << endl;


	// complex + complex
	cout << "Complex c + Complex c: " << c + c << endl;
	cout << "Complex c + Complex c2: " << c + c2 << endl;
	cout << "Complex c2 + Complex c3: " << c2 + c3 << endl;
	cout << "Complex c2 + Complex c4: " << c2 + c4 << endl;
	cout << "Complex c4 + Complex c5: " << c4 + c5 << endl;
	cout << endl;

	// complex - complex
	cout << "Complex c - Complex c: " << c - c << endl;
	cout << "Complex c - Complex c2: " << c - c2 << endl;
	cout << "Complex c2 - Complex c3: " << c2 - c3 << endl;
	cout << "Complex c2 - Complex c4: " << c2 - c4 << endl;
	cout << "Complex c4 - Complex c5: " << c4 - c5 << endl;
	cout << endl;

	return;
}