//a program that print the months

#include <iostream>
using namespace std;

enum enMonthList{ JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

void ChoseMonthMenu()
{
	cout << "************************" << endl;
	cout << "        Months        " << endl;
	cout << "************************" << endl;
	cout << "1: JANUARY" << endl;
	cout << "2: FEBRUARY" << endl;
	cout << "3: MARCH" << endl;
	cout << "4: APRIL" << endl;
	cout << "5: MAY" << endl;
	cout << "6: JUNE" << endl;
	cout << "7: JULY" << endl;
	cout << "8: AUGUST" << endl;
	cout << "9: SEPTEMBER" << endl;
	cout << "10: OCTOBER" << endl;
	cout << "11: NOVEMBER" << endl;
	cout << "12: DECEMBER" << endl;
	cout << "************************" << endl;
}

int ReadNumberInRange(string massage, int FROM, int TO)
{
	int num;
	do
	{
		cout << massage << endl;
		cin >> num;
	} while (num < FROM || num > TO);
	return num;


}


enMonthList ReadMonthNumber()
{
	return (enMonthList)ReadNumberInRange("Enter Month Number :",1,12);
}

string PrintMonthName(enMonthList month)
{
	switch (month)
	{
	case JANUARY:
		return "January";
	case FEBRUARY:
		return "February";
	case MARCH:
		return "March";
	case APRIL:
		return "April";
	case MAY:
		return "May";
	case JUNE:
		return "June";
	case JULY:
		return "July";
	case AUGUST:
		return "August";
	case SEPTEMBER:
		return "September";
	case OCTOBER:
		return "October";
	case NOVEMBER:
		return "November";
	case DECEMBER:
		return "December";
	default:
		return "Not a Valid Month"
	
	}
}

int main()
{

	ChoseMonthMenu();
	cout << PrintMonthName(ReadMonthNumber());



	cout << endl << endl;
	return 0;
}
