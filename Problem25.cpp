// validate age using loop

#include <iostream>
using namespace std;

short ReadInput()
{
	short age;
	cout << "Enter age between 18 and 45: ";
	cin >> age;
	return age;
}

bool ValidateNumberInRange(int num, int From, int To)
{
	return num >= From && num <= To;
}

int ReadUntilAgeBetween(int From,int To)
{
	int Age = 0;
	do
	Age = ReadInput();
	while (!ValidateNumberInRange(Age,From,To));
	return Age;
}

void PrintResult(int result)
{
	cout << "You Age : " << result;
}


int main()
{
	PrintResult(ReadUntilAgeBetween(18, 45));




	cout << endl;
	return 0;
}

