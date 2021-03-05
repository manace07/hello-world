// Volume of figures calculation
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	cout << "Volume of Figures\n";
	cout << "[C] - Cube\n";
	cout << "[R] - Rectangular Prism\n";
	cout << "[S] - Sphere\n";
	cout << endl;
	
	char fig;
	float si1,si2;
	float L,W,H;
	float pi = 3.141592654;
	
	cout << "Choose figure: ";
	cin >> fig;
	

	
	switch(fig){
		case 'C':
		case 'c':
			cout << "You have chosen Cube.\n";
			cout << "Enter side: ";
			cin >> si1;
			cout << "The volume of the cube is: " << fixed << setprecision(2) << pow(si1,3);
			break;
		case 'R':
		case 'r':
			cout << "You have chosen Rectangular Prism\n";
			cout << "Enter Length: ";
			cin >> L;
			cout << "Enter Width: ";
			cin >> W;
			cout << "Enter Height: ";
			cin >> H;
			cout << "The volume of the Rectangular Prism is: " << fixed << setprecision(2) << L*W*H;
			break;
		case 'S':
		case 's':
			cout << "You have chosen Sphere\n";
			cout << "Enter side: ";
			cin >> si2;
			cout << "The volume for Sphere is: " << fixed << setprecision(2) << 4.0/3*pi*si2*si2*si2;
			break;
		default: cout << "Invalid! Please try again";
		break;
			
				
	}
	return 0;
}
