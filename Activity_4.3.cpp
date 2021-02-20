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
