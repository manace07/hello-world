/*
Write a program that solves for side c given the two sides a, b and angle C.

Law of Cosines
a2 = b2 + c2 – 2bc cos A
b2 = a2 + c2 – 2ac cos B
c2 = a2 + b2 – 2ab cos C
*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double a,b;
	double deg, rad, result;
	
	cout << "Enter value in degrees: ";
	cin >> deg;
	cout << "Enter value for a: ";
	cin >> a;
	cout << "Enter value for b: ";
	cin >> b;
	
	rad = deg*3.14159/180; 
	result = sqrt(pow(a,2)+pow(b,2)-(2*a*b*cos(rad)));
	
	cout << "c is: " << result;
	
	return 0;
}
