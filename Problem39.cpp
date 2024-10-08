// program that calculate  the remainder cash to be paid back

#include <iostream>
using namespace std;

float ReadPositiveNumber(string massage)
{
	float num;
	do {
	cout << massage << endl;
	cin >> num;
	} while (num < 0);
	
	return num;
}

float CalculateRemainder(float CashPaid, float TotalBill)
{
	return CashPaid - TotalBill;
}

void PrintRemainder(float remainder)
{
	cout << "\nRemainder = " << remainder << endl;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Enter The Total Bill");
	float CashPaid = ReadPositiveNumber("Enter The Paid Cash");


	PrintRemainder(CalculateRemainder(CashPaid, TotalBill));

	cout << endl << endl;
	return 0;
}

