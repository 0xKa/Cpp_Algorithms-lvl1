// a program that sum the even numbers from 1 to N


#include <iostream>
using namespace std;

enum enNumberTypes { Odd = 1, Even = 2 };

int ReadInput()
{
	int num;

	cout << "enter a number : ";
	cin >> num;
	return num;
}

enNumberTypes CheackNumberType(int number)
{
	if (number % 2 != 0)
		return Odd;
	else
		return Even;

}

void SumEvenNumbersFrom1toN(int num)
{
	int sum = 0;
	for (int counter = 1; counter < num; counter++)
	{
		if (CheackNumberType(counter) == Even)
		{
		sum += counter;
		cout << counter << "+" << endl;
		}
	}
	cout << "sum = " << sum;
}

int main()
{


	SumEvenNumbersFrom1toN(ReadInput());



	cout << endl << endl;
	return 0;
}

