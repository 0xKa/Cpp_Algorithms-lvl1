// program that calculate the seconds in days, hours, minutes
#include <iostream>
using namespace std;

struct strDuration 
{
	int days, hours, minutes, seconds;
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

strDuration ReadDuration()
{
	strDuration Duration;

	Duration.days = ReadPositiveNumber("Enter Number Of Days :");
	Duration.hours = ReadPositiveNumber("Enter Number Of Hours :");
	Duration.minutes = ReadPositiveNumber("Enter Number Of Minutes :");
	Duration.seconds = ReadPositiveNumber("Enter Number Of Seconds :");

	return Duration;
}

int ConvertDurationToSeconds(strDuration duration)
{
	return duration.days * 24 * 60 * 60 + duration.hours * 60 * 60 + duration.minutes * 60 + duration.seconds;
}

int main()
{

	cout << "Total Seconds = " << ConvertDurationToSeconds(ReadDuration()) << " Seconds";

	cout << endl << endl;
	return 0;
}

