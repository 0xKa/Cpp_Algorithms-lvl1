//Simple Calculator

#include <iostream>
using namespace std;


enum enOperationType { plus = '+', minus = '-', multiplication = '*', division = '/' };

float ReadNumber(string massage)
{
	float num;
	cout << massage << endl;
	cin >> num;
	return num;
}

enOperationType ReadOperationType()
{
	char OT;
	cout << "Enter Operation Type (+, -, *, /) : \n";
	cin >> OT;
	return (enOperationType)OT;
}

float CalculateResult(float num1, float num2, enOperationType ot)
{
	switch (ot)
	{
	case enOperationType::plus:
		return num1 + num2;
	case enOperationType::minus:
		return num1 - num2;
	case enOperationType::multiplication:
		return num1 * num2;
	case enOperationType::division:
		return num1 / num2;
	default:
		return 0;
	}
}

int main()
{
	float Number1 = ReadNumber("Enter First Number :");
	enOperationType OT = ReadOperationType();
	float Number2 = ReadNumber("Enter Second Number :");


	cout << "Result = " << CalculateResult(Number1,Number2,OT);


	cout << endl << endl;
	return 0;
}

