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
	cout << "Cout: " << test << endl;
	cout << "Cout: " << test2 << endl;
	cout << "Cout: " << test3 << endl;
	cout << "Cout: " << test4 << endl;
	cout << "Cout: " << test5 << endl;
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
	
}