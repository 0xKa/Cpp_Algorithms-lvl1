// program to check prime number
#include <iostream>
using namespace std;

enum enCheckPrime { Prime = 1, NotPrime = 2 };

//int ReadPositiveNumber(string massage)
//{
//	int num;
//	do
//	{
//		cout << "Enter a Positive Number: \n";
//		cin >> num;
//
//	} while (num < 0);
//	return num;
//}
//
//enCheckPrime CheckPrime(int num)
//{
//	int M = round(num / 2);
//	
//	for (int counter = 2; counter <= M; counter++)
//	{
//		if (num % counter == 0)
//			return NotPrime;
//	}
//
//	return Prime;
//			
//}
//
//void PrintNumberType(int Number)
//{
//	switch (CheckPrime(Number))
//	{
//	case Prime:
//		cout << "The Number "<< Number << " is Prime\n";
//		break;
//	case NotPrime:
//		cout << "The Number " << Number << " is Not Prime\n";
//		break;
//	}
//}

int ReadPositiveNumber(string massage)
{
	int num;
	do
	{
		cout << massage << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

enCheckPrime CheckPrime(int num)
{
	int M = round(num / 2);
	for (int counter = 2; counter <= M; counter++)
	{
		if (num % counter == 0)
			return NotPrime;
	}

	return Prime;

}

void PrintNumberType(int num)
{
	switch (CheckPrime(num))
	{
	case (Prime):
		cout << "The Number is Prime\n";
		break;
	case(NotPrime):
		cout << "The Number is Not Prime\n";
		break;
	}
}

int main()
{
	PrintNumberType(ReadPositiveNumber("Enter a Positive Number: "));



	cout << endl;
	return 0;
}


