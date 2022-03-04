#include <iostream>
using namespace std;

#include "ComplexClass.h"





//----- Definition of default constructor
ComplexNumber::ComplexNumber() : Real(0), Imaginary(0)
{
}

ComplexNumber::ComplexNumber(int r, int i)
{
	// HANDLE BAD INPUT
	Real = r;
	Imaginary = i;
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
	if (Real == 0 && Imaginary == 0) {
		return 0;
	}
	if (Real > 0 && Imaginary > 0) {
		return 1;
	}
	if (Real < 0 && Imaginary > 0) {
		return 2;
	}
	if (Real < 0 && Imaginary < 0) {
		return 3;
	}
	if (Real > 0 && Imaginary < 0) {
		return 4;
	}
}

double ComplexNumber::get_Magnitude() const {
	double magnitude;

	magnitude = sqrt((Real * Real) + (Imaginary * Imaginary));
	return magnitude;
}

// *************************************
// 
// Mutator
// 
//**************************************
void ComplexNumber::Conjugate() {
	Imaginary = Imaginary * -1;
}

//// *************************************
//// 
//// Operator
//// 
////**************************************
ComplexNumber& ComplexNumber::operator=(const ComplexNumber& right)
{
	if (Real != right.Real && Imaginary != right.Imaginary) {
		Real = right.Real;
		Imaginary = right.Imaginary;
	}
	return *this;
}

ostream& operator<<(ostream& out, const ComplexNumber cn)
{
	if (cn.get_Im() >= 0) {
		out << cn.get_Re() << " + " << cn.get_Im() << "i";
		return out;
	}

	if (cn.get_Im() < 0) {
		int makep; // makes negative positive
		makep = cn.get_Im() * -1;

		out << cn.get_Re() << " - " << makep << "i";
		return out;
	}
}

ComplexNumber operator*(int n, const ComplexNumber& right) // 3 * (2 + 3i) = (3 * 2) + (3 * 3)i
{

	int r;
	int i;

	r = right.get_Re() * n;
	i = right.get_Im() * n;

	ComplexNumber temp(r, i);
	return temp;
	
}

ComplexNumber operator*(const ComplexNumber& left, const ComplexNumber& right) // (3 + 4i) * (2 + 5i) = (3 * 2 - 4 * 5) + (3 * 5 + 4 * 2)i
{
	int r;
	int i;

	r = ((left.get_Re() * right.get_Re()) - (left.get_Im() * right.get_Im()));
	i = ((left.get_Re() * right.get_Im()) + (left.get_Im() * right.get_Re()));

	ComplexNumber temp(r, i);
	return temp;
}

ComplexNumber operator+(const ComplexNumber& left, const ComplexNumber& right) // (3 + 4i) + (2 + 5i) = (3 + 2) + (4 + 5)i
{
	int r, i;

	r = left.get_Re() + right.get_Re();
	i = left.get_Im() + right.get_Im();

	ComplexNumber temp(r, i);
	return temp;
}

ComplexNumber operator-(const ComplexNumber& left, const ComplexNumber& right) // (3 + 4i) ? (2 + 5i) = (3 + 2) ? (4 + 5)i
{
	int r, i;

	r = left.get_Re() + right.get_Re();
	i = left.get_Im() + right.get_Im();

	ComplexNumber temp(r, i);
	return temp;
}

bool operator<(const ComplexNumber& left, const ComplexNumber& right)
{
	return (left.get_Magnitude() < right.get_Magnitude());
}
