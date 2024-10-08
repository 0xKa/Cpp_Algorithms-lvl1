//
#include <iostream>
using namespace std;

float ReadPositiveNumber(string massage)
{
	float num;
	do {
		cout << massage << endl;
		cin >> num;
	} while (num < 0);
	return num;
}

float HoursToDays(float hours)
{
	return hours / 24;
}

float HoursToWeeks(float hours)
{
	return hours / (24 * 7);
}

//float DaysToWeeks(float days)
//{
//	return days / 7;
//}

int main()
{
	float NumberOfHours = ReadPositiveNumber("Enter Number Of Hours");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = HoursToWeeks(NumberOfHours);


	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << NumberOfWeeks << endl;


	cout << endl << endl;
	return 0;
}