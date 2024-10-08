// a program that print full name
#include <iostream>
using namespace std;

struct stInfo
{
	string firstName;
	string lastName;
	bool reversed;
};

stInfo ReadFullName()
{
	stInfo Info;

	cout << "Please Enter Your First Name :\n";
	cin >> Info.firstName;
	cout << "Please Enter Your Last Name :\n";
	cin >> Info.lastName;
	cout << "Reversed ?\n";
	cin >> Info.reversed;

	return Info;
}

string GetFullName(stInfo info)
{
	string FullName;
	if (info.reversed)
		FullName = "\"" + info.lastName + " " + info.firstName + "\"";
	else
		FullName = "\"" + info.firstName + " " + info.lastName + "\"";

	return FullName;
}

void PrintFullName(string fullname)
{
	cout << "Your Name is " << fullname;
}

int main()
{


	PrintFullName(GetFullName(ReadFullName()));





	cout << endl << endl;
	return 0;
}