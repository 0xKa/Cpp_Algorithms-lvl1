//a program that print the days

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

enum enWeekDays { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };


void ShowWeekMenu()
{
	cout << "************************" << endl;
	cout << "       Week Days        " << endl;
	cout << "************************" << endl;
	cout << "1: Sunday" << endl;
	cout << "2: Monday" << endl;
	cout << "3: Tuesday" << endl;
	cout << "4: Wednesday" << endl;
	cout << "5: Thursday" << endl;
	cout << "6: Friday" << endl;
	cout << "7: Saturday" << endl;
	cout << "************************" << endl;

}

int ReadNumberInRange(string massage, int TO, int FROM)
{
	int num = 0;
	do
	{
		cout << massage;
		cin >> num;
		cout << endl;
	} while (num < TO || num > FROM);
	return num;
}

enWeekDays ReadDayNumber()
{
	return (enWeekDays)ReadNumberInRange("Please enter the number of day: \n", 1, 7);
}

string PrintDay(int DayNumber)
{
	switch (DayNumber)
	{
	case Sun:
		return "\"Sunday\"";
	case Mon:
		return "\"Monday\"";
	case Tue:
		return "\"Tuesday\"";
	case Wed:
		return "\"Wednesday\"";
	case Thu:
		return "\"Thursday\"";
	case Fri:
		return "\"Friday";
	case Sat:
		return "\"Saturday\"";
	}
}

int main()
{

	ShowWeekMenu();
	cout << PrintDay(ReadDayNumber());

	cout << endl << endl;
	return 0;
}

