#include "ComplexNumber.h"
#include<sstream>

ComplexNumber::ComplexNumber()
{
}

ComplexNumber::ComplexNumber(int real, int imaginary)
{
	set_real(real);
	set_imaginary(imaginary);
}

ComplexNumber::ComplexNumber(ComplexNumber k1, ComplexNumber k2)
{
	Real = k1.Real + k2.Real;
	Imaginary = k1.Imaginary + k2.Imaginary;
}

void ComplexNumber::set_real(int real)
{
	Real = real;
}

void ComplexNumber::set_imaginary(int imaginary)
{
	Imaginary = imaginary;
}

string ComplexNumber::get()
{
	stringstream complex;
	complex <<"Rezultat= "<< Real;
	if (Imaginary > 0)
		complex << "+" << Imaginary << "i";
	else if (Imaginary < 0)
		complex << Imaginary << "i";
	complex << "\n\n";
	return complex.str();
}

ComplexNumber::~ComplexNumber()
{
}
