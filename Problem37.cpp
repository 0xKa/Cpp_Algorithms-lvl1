// a program that calculate the sum of entered numbers until -99
#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string massage)
{
	float num;
	cout << massage << endl;
	cin >> num;
	return num;

}

float CalculateSum()
{
	int counter = 1;
	float sum = 0, num = 0;
	do
	{
		num = ReadNumber("Enter Number" + to_string(counter));

		if (num == -99)
			break;

		sum += num;
		counter++;

	} while (num != -99);
	return sum;
}


int main()
{
 
	cout << "Result = " << CalculateSum();

	cout << endl << endl;
	return 0;
}