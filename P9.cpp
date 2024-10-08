#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadArrayData(int arr1[100], int& length)
{
	cout << "how many numbers do you want to enter? 1 to 100\n";
	cin >> length;

	for (int i = 0; i <= length - 1; i++)
	{
		cout << "please enter number " << i + 1 << endl;
		cin >> arr1[i];

	}


}

void PrintArrayData(int arr1[100], int length)
{


	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Number [" << i + 1 << "] : " << arr1[i] << endl;
	}
	cout << endl << "*************************************\n";

}

int PrintSum(int arr1[100], int length)
{
	int sum = 0;
	for (int i = 0; i <= length - 1; i++)
	{
		sum += arr1[i];
	}
	return sum;

}

float PrintAverage(int arr1[100], int length)
{

	return (float)PrintSum(arr1, length) / length;

}

int main()
{


	int arr1[100], length = 0;
	ReadArrayData(arr1, length);
	PrintArrayData(arr1, length);
	cout << "sum = " << PrintSum(arr1, length) << endl;
	cout << "averrage = " << PrintAverage(arr1, length) << endl;



	cout << endl << endl;
	return 0;

}