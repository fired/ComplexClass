#include <iostream>
using namespace std;

#ifndef COMPLEXCLASS
#define COMPLEXCLASS

class ComplexNumber {
public:
	// Constructors
	ComplexNumber();
	ComplexNumber(int r, int i);

	// Accessors
	int get_Re() const;
	int get_Im() const;
	int get_Location() const; // Get quadrant
	double get_magnitude() const;

	// Mutators
	void Conjugate(); // When z = x + yi the conjugate, denoted z, is dfined to be z = x - yi

	// Operator 
	ComplexNumber& operator = (const ComplexNumber& right);

private:
	int Real, Imaginary; 

};


ostream& operator <<(ostream& out, const ComplexNumber cn);

// Math Operator
ComplexNumber operator *(int n, const ComplexNumber& right);
ComplexNumber operator*(const ComplexNumber& left, const ComplexNumber& right);
ComplexNumber operator+ (const ComplexNumber& left, const ComplexNumber& right);
ComplexNumber operator- (const ComplexNumber& left, const ComplexNumber& right);

//Free Functions
bool operator < (const ComplexNumber& left, const ComplexNumber& right);

#endif