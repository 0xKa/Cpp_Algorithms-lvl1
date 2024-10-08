// a program that sum the odd numbers from 1 to N

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

void PrintOddNumbersFrom1toN(int num)
{
	int sum = 0;
	for (int counter = 0; counter <= num; counter++)
	{
		if (CheackNumberType(counter) == Odd)
		{
			sum += counter;
			cout << counter << " +" << endl;
		}
	}
	cout << "sum = " << sum;
}

void UsingDoWhile(int num)
{
	int sum = 0;
	int counter = 0;
	do
	{
		counter++;
		if (CheackNumberType(counter) == Odd)
		{
			sum += counter;
			cout << counter << "+" << endl;
		}

	} while (counter < num);

	cout << "sum = " << sum;

}

void UsingWhileLoop(int num)
{
	int sum = 0;
	int counter = 0;
	while (counter < num)
	{
		counter++;
		if (CheackNumberType(counter) == Odd)
		{
			sum += counter;
			cout << counter << "+" << endl;
		}
	}
		cout << "sum = " << sum;
}

int main()
{
	

	PrintOddNumbersFrom1toN(ReadInput());
	cout << endl;
	UsingDoWhile(ReadInput());
	cout << endl;
	UsingWhileLoop(ReadInput());


cout << endl << endl;
return 0;
}
