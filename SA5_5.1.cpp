#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int first, second, third; 
	float sum,avg;
	
	cout << "First exam grade: ";
	cin >> first;
	cout << "Second exam grade: ";
	cin >> second;
	cout << "Third exam grade: ";
	cin >> third;
	cout << endl;
	
	sum = first+second+third;
	avg = sum/3;
	
	cout << endl;
	
	if((avg>=70) && (avg<=100)){
		cout << "Your Average is: "<<fixed<<setprecision(2)<<avg<<" :)"<<endl;
	}
	else{
		cout << "Your Average is: "<<fixed<<setprecision(2)<<avg<<" :("<<endl;
	}
	return 0;
}
