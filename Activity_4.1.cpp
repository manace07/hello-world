#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a,b;
	
	cout << "Enter First Value: ";
	cin >> a;
	cout << "Enter Second Value: ";
	cin >> b;
	
	cout << "The Hypotenuse is: " << sqrt(pow(a,2)+pow(b,2));
	
	return 0;
}
