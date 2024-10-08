#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stInfo 
{
	short age;
	bool hasDriverLicence;
};

stInfo ReadInfo()
{
	stInfo info;
	cout << "enter age :";
	cin >> info.age;
	cout << "have licence?\n";
	cin >> info.hasDriverLicence;
	cout << endl << endl;
	return info;
}

bool checkInfo(stInfo info)
{
	return (info.age > 21 && info.hasDriverLicence == 1);
}

void PrintResult(stInfo info)
{
	if (checkInfo(info))
	{
		cout << "accepted";
	}
	else
	{
		cout << "rejected";
	}
}
int main()
{
	PrintResult(ReadInfo());

	cout << endl;
	return 0;
}

