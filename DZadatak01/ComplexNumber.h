#pragma once
#include<string>
using namespace std;


class ComplexNumber
{
public:
	ComplexNumber();
	ComplexNumber(int real, int imaginary);
	ComplexNumber(ComplexNumber k1, ComplexNumber k2);
	void set_real(int real);
	void set_imaginary(int imaginary);
	string get();
	~ComplexNumber();
private:
	int Real;
	int Imaginary;
};

