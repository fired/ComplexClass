#include <iostream>
using namespace std;

#include "ComplexClass.h"





//----- Definition of default constructor
ComplexNumber::ComplexNumber() {
	Real = 0;
	Imaginary = 0;
}

ComplexNumber::ComplexNumber(int r, int i)
{
	// fill in
}

// *************************************
// 
// Accessors
// 
//**************************************
int ComplexNumber::get_Re() const {
	return Real;
}

int ComplexNumber::get_Im() const {
	return Imaginary;
}

int ComplexNumber::get_Location() const {
	// fill in
}

double ComplexNumber::get_magnitude() const {
	// fill in
}

// *************************************
// 
// Mutator
// 
//**************************************
void ComplexNumber::Conjugate() {
	// fill in
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& right)
{
	// insert return statement here
}

ComplexNumber operator*(int n, const ComplexNumber& right)
{
	return;
}

ComplexNumber operator*(const ComplexNumber& left, const ComplexNumber& right)
{
	return;
}

ComplexNumber operator+(const ComplexNumber& left, const ComplexNumber& right)
{
	return;
}

ComplexNumber operator-(const ComplexNumber& left, const ComplexNumber& right)
{
	return;
}

bool operator<(const ComplexNumber& left, const ComplexNumber& right)
{
	return false;
}
