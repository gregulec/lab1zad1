#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Binomial{
private: double a;
		 double b;
		 double c;
public:
	double x1;
	double x2;
	Binomial();
	Binomial(double a, double b, double c);
	~Binomial();
	double getA() const;
	double getB() const;
	double getC() const;
	double getX1(Binomial& other);
	double getX2(Binomial& other);
	double calculate(double x);
	Binomial operator+(Binomial& other);
	Binomial operator-(Binomial& other);
};

