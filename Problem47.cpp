//program that calculate how many months you need to settle the loan

#include <iostream>
using namespace std;


float ReadPositiveNumber(string massage)
{
	float num;
	do
	{
		cout << massage << endl;
		cin >> num;
	} while (num < 0);
	return num;
}

float CalculateTotalMonths(float LoanAmount, float MonthlyPayment)
{
	return LoanAmount / MonthlyPayment;
}

int main()
{

	float LoanAmount = ReadPositiveNumber("Enter the loan amount: ");
	float MonthlyPayment = ReadPositiveNumber("Enter the monthly payment: ");

	cout << "\nThe months need to settle the loan = " << CalculateTotalMonths(LoanAmount, MonthlyPayment) << " Months.\n";

	cout << endl << endl;
	return 0;
}
