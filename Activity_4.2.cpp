#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string name,payroll;
	int EmpID;
	double Late,MSalary,tax,LA,LAC,hour,ded;
	
	cout << "Enter Employee ID: ";
	cin >> EmpID;
	cin.ignore();
	cout << "Enter Employee Name: ";
	getline (cin, name); 
	cout << "Enter Payroll Period (mm/dd/yyyy): ";
	cin >> payroll;
	cout << "Enter Monthly Salary: ";
	cin >> MSalary;
	cout << "Enter Lates and Absences (in minutes): ";
	cin >> Late;
	
	tax = MSalary*0.12;
	hour = MSalary/30/8;
	LA = Late/60;
	LAC = LA*hour;
	ded = 3000+tax+LAC;
	
	cout << "--------------------------------------------------------------------" << endl << endl;
	
	cout << "Employee ID: " << EmpID << setw(30) << "	Payroll Period: " << payroll << endl;
	cout << "Employee Name: "<< name << endl << endl;
	
	cout << "INCOME" << setw(40) << "DEDUCTIONS" << endl; 
	cout << "Monthly Salary: Php" << fixed << setprecision(2) << MSalary << setw(32) << "Lates and absences  " << LAC << endl;
	cout << setw(56) << "Philhealth " << 1000.00 << endl;
	cout << setw(56) << "Pag-ibig " << 800.00 << endl;
	cout << setw(56) << "SSS " << 1200.00 << endl;
	cout << setw(56) << "Withholding tax " << tax << endl;
	
	cout << "Total Earnings: Php" << MSalary << endl;
	cout << "Total Deducions: Php"<< ded << endl;
	cout << "Net Pay: " << MSalary-ded;
	

	  
	
	return 0;
}
