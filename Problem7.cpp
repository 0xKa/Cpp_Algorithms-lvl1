// a program that print the half of any number
#include <iostream>
using namespace std;

float ReadNumber()
{
	float num;
	cout << "Please enter a Number : " << endl;
	cin >> num;
	return num;
}

float CalculateNumber(float num)
{
	return num / 2;
}

void PrintResult(float num)
{
	cout << "\nThe Half Of Your Number Is \" " << CalculateNumber(num) << " \"\n";
}

int main()
{

	PrintResult(ReadNumber());

	return 0;
}

