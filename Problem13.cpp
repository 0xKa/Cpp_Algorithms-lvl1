// a program that print the bigger number between 3 diffrent numbers


#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3)
{
	cout << "please enter the first number  : ";
	cin >> num1;
	cout << "please enter the second number : ";
	cin >> num2;
	cout << "please enter the third number  : ";
	cin >> num3;
}
int CheackBiggerNumber(int num1, int num2, int num3)
{
	if (num1 > num2)
		if (num1 > num2)
			return num1;
		else
			return num2;

	else
		if (num2 > num3)
			return num2;
		else
			return num3;
}

void PrintResult(int result)
{
	cout << "The Biggest Number is [ " << result << " ]";
}


int main()
{
	int num1,num2,num3;

	ReadNumbers(num1,num2,num3);
	PrintResult(CheackBiggerNumber(num1, num2, num3));





	cout << endl << endl;
	return 0;
}
