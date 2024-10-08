//A Program That Cheak If Number Even or Odd

#include <iostream>
#include <string>
using namespace std;

enum enNumberType { Odd = 1,Even = 2 };
	 

int ReadNumber()
{
	int number = 0;
	cout << "Please Enter a Number to Check If It's Even or Odd : ";
	cin >> number;
	cout << endl;
	return number;

}

enNumberType CheckNumberType(int number)
{
	int Result = number % 2;
	if (Result != 0)
	{
		return enNumberType::Odd;
	}
	else
	{
		return enNumberType::Even;
	}
}

void PrintNumberType(int number)
{
	cout << "The Number is [";
	if (number == enNumberType::Odd) 
	{
	cout << "Odd";
	}
	else
	{
	cout << "Even";
	}
	cout << "]";
}

int main()
{

	PrintNumberType(CheckNumberType(ReadNumber()));


	cout << endl << endl;
	return 0;
}