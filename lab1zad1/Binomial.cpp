#include "Binomial.h"
#include <iostream>
using namespace std;

Binomial::Binomial(double a, double b, double c):a(a), b(b), c(c)
{
	x1 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
}

Binomial::~Binomial(){}
double Binomial::getA() const{
	return a;
}
double Binomial::getB() const{
	return b;
}
double Binomial::getC() const{
	return c;
}
double Binomial::getX1(Binomial& other){
	return x1;
}
double Binomial::getX2(Binomial& other){
	return x2;
}
double Binomial::calculate(double x){
	return a*x*x + b*x + c;
}
Binomial Binomial::operator+(Binomial& other){
	return Binomial(a + other.a, b + other.b, c + other.c);
}
Binomial Binomial::operator-(Binomial& other){
	return Binomial(a - other.a, b - other.b, c - other.c);
}