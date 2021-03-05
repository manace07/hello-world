//Zodiac sign 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int day;
	int month;
		
	cout << "Enter month(1-12): ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;
	
	if (month == 1 && day >= 20){
		cout << "Zodiac sign for January " << day << " is Aquarius";
	} 
	else if (month == 2 && day <= 18){
		cout << "Zodiac sign for February " << day << " is Aquarius";
	}	
	else if (month == 2 && day >= 19){	
		cout << "Zodiac sign for February " << day << " is Pisces";
	} 
	else if (month == 3 && day <= 20){
		cout << "Zodiac sign for March " << day << " is Pisces";
	} 
	else if (month == 3 && day >= 21){
		cout << "Zodiac sign for March " << day << " is Aries";		
	}
	else if(month == 4 && day <= 19){
		cout << "Zodiac sign for April " << day << " is Aries";
	} 
	else if (month == 4 && day >= 20){
		cout << "Zodiac sign for April " << day << " is Taurus";
	} 
	else if (month == 5 && day <= 20){
		cout << "Zodiac sign for May " << day << " is Taurus";	
	} 
	else if (month == 5 && day >= 21){
		cout << "Zodiac sign for May " << day << " is Gemini";
	}
	else if (month == 6 && day <= 20){
		cout << "Zodiac sign for June " << day << " is Gemini";
	} 
	else if (month == 6 && day >= 21){
		cout << "Zodiac sign for June " << day << " is Cancer";
	}
	else if (month == 7 && day <= 22){
		cout << "Zodiac sign for July " << day << " is Cancer";	
	} 
	else if (month == 7 && day >= 23){
		cout << "Zodiac sign for July " << day << " is Leo";
	}
	else if (month == 8 && day <= 22){
		cout << "Zodiac sign for August " << day << " is Leo";
	} 
	else if (month == 8 && day >= 23){
		cout << "Zodiac sign for August " << day << " is Virgo";
	}
	else if (month == 9 && day <= 22){
		cout << "Zodiac sign for September " << day << " is Virgo";		
	} 
	else if (month == 9 && day >= 23){
		cout << "Zodiac sign for September " << day << " is Libra";
	}
	else if (month == 10 && day <= 22){
		cout << "Zodiac sign for October " << day << " is Libra";		
	} 
	else if (month == 10 && day >= 23){
		cout << "Zodiac sign for October " << day << " is Scorpio";
	} 
	else if (month == 11 && day <= 21){
		cout << "Zodiac sign for November " << day << " is Scorpio";
	} 
	else if (month == 11 && day >= 22){
		cout << "Zodiac sign for November " << day << " is Sagittarius";
	} 
	else if (month == 12 && day <= 21){
		cout << "Zodiac sign for December " << day << " is Sagittarius";
	} 
	else if(month == 12 && day >= 22){
		cout << "Zodiac sign for December " << day << " is Capricorn";
	} 
	else if (month == 1 && day <= 19){
		cout << "Zodiac sign for January " << day << " is Capricorn";	
	} 
	else{
		cout << "Invalid Input";
	}  
	return 0;
}
