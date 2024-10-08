// a program that calculate the Factorial of N!

#include <iostream>
using namespace std;

//int oReadPostiveNumber(string massage)
//{
//	int num;
//	cout << massage <<endl;
//	cin >> num;
//	return num;
//}
//
//int oFactorial(int N)
//{
//	int factorial = 1;
//	for (N; N > 0 ; N--)
//	{
//		factorial *= N;
//	}
//	return factorial;
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

int Factorial(int num)
{
	int Factorial = 1;

	for (num; num > 0; num--)
	{
		Factorial *= num;
	}
	return Factorial;

}


int main()
{
	
cout << Factorial(ReadPositiveNumber("Enter a POSITIVE Number : "));

	cout << endl << endl;
	return 0;
}


