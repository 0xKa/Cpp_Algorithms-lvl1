 //program that calculate the bill value + restaurant charges 10% + services fee 16%
 //input = 100
 //output = 127.6
#include <iostream>
using namespace std;

float ReadPositiveNumber(string massage)
{
	float num;
	do{
		cout << massage << endl;
		cin >> num;
	} while (num < 0);

	return num;

}

float CalculateFees(float BillValue)
{
	float TotalBillWithFees = BillValue * 1.16;
	TotalBillWithFees *= 1.10;
	//Totalbill = BillValue + BillValue * 0.16;
	//Totalbill = Totalbill + Totalbill * 0.1;
	return TotalBillWithFees;
}

void PrintTotalBill(float bill)
{
	cout << "\nThe Total Bill Included Service Fees ans Sale Tax = " << bill;

}

int main()
{

	float BillValue = ReadPositiveNumber("Enter the Bill Value");

	PrintTotalBill(CalculateFees(BillValue));
	


	cout << endl << endl;
	return 0;
}

