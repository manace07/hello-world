//Monthly salary
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float MS;
	
	cout << "Enter monthly sales: ";
	cin >> MS;
	
	cout << endl;
	
	if (MS >= 50000){
	cout << "Your income is " << fixed << setprecision(2) << 575 + MS * 0.16;
	} 
	else if (MS < 50000 && MS >= 40000){
		cout << "Your income is " << fixed << setprecision(2) << 550 + MS * 0.14;
	} 
	else if (MS < 40000 && MS >= 30000){
		cout << "Your income is " << fixed << setprecision(2) << 525 + MS * 0.12;
	}
	else if (MS < 30000 && MS >= 20000){
		cout << "Your income is " << fixed << setprecision(2) << 500 + MS * 0.09;
	}
	else if (MS < 20000 && MS >= 10000){
		cout << "Your income is " << fixed << setprecision(2) << 450 + MS * 0.05;
	}
	else if(MS < 10000){
		cout << "Your income is " << fixed << setprecision(2) << 400 + MS * 0.03;
	}
	else{
		cout << "Invalid Input";
	}
	
	return 0;
}
