//program that convert the seconds to years, days, hours, minutes

#include <iostream>
#include <cmath>
using namespace std;


struct struDurations
{
	int NumberOfYears, NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string massage)
{
	int num;
	do
	{
		cout << massage << endl;
		cin >> num;
	} while (num < 0);
	return num;
}

struDurations CalculateSecondsInDurations(int TotalSeconds)
{
	struDurations durations;
	const int SecondsInMinute = 60;
	const int SecondsInHour = 60 * 60;
	const int SecondsInDay = 24 * 60 * 60;
	const int SecondsInYear = 365 * 24 * 60 * 60;

	int remainder = 0;

	durations.NumberOfYears = floor(TotalSeconds / SecondsInYear);
	remainder = TotalSeconds % SecondsInYear;
	
	durations.NumberOfDays = floor(remainder / SecondsInDay);
	remainder = remainder % SecondsInDay;
	
	durations.NumberOfHours = floor(remainder / SecondsInHour);
	remainder = remainder % SecondsInHour;
	
	durations.NumberOfMinutes = floor(remainder / SecondsInMinute);
	remainder = remainder % SecondsInMinute;
	
	durations.NumberOfSeconds = remainder;
	
	return durations;

}

void PrintResult(struDurations durations)
{
	
	cout << "\nResult = " << durations.NumberOfYears << " Years, " << durations.NumberOfDays << " Days, " << durations.NumberOfHours << " Hours, " << durations.NumberOfMinutes << " Minutes, " << durations.NumberOfSeconds << " Seconds.";
}

int main()
{

	int TotalSeconds = ReadPositiveNumber("Enter Total Seconds: ");

	PrintResult(CalculateSecondsInDurations(TotalSeconds));

	cout << endl << endl;
	return 0;

}

