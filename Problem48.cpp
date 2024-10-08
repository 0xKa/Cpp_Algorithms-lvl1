//program that calculate the monthly installment amount you need to settle the loan

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

float CalculateMonthlyPayment(float loanamount, int months)
{
	return loanamount / months;
}

int main()
{
	int LoanAmount = ReadPositiveNumber("Enter the loan amount");
	int Months = ReadPositiveNumber("How many months");

	cout << "\nMonthly Installment = " << CalculateMonthlyPayment(LoanAmount, Months);





	cout << endl << endl;
	return 0;
}
