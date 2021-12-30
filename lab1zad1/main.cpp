#include <iostream>
#include "Binomial.h"
using namespace std;

int main(){
	Binomial n(1.0, 2.0, 1.0);
	Binomial m(1.0, 2.0, 3.0);
	Binomial p;
	p = n + m;
	cout << p.getA();
	cout << p.getB();
	cout << p.getC();
	cout << p.getX1(p);
	cout << p.getX2(p);
	cout << n.getA();
	cout << n.getB();
	cout << n.getC();
	cout << n.getX1(n);
	cout << n.getX2(n);
	cout << m.getA();
	cout << m.getB();
	cout << m.getC();
	cout << m.getX1(m);
	cout << m.getX2(m);
}