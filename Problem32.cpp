// a program that print thw number to the power of M

#include <iostream>
#include <cmath>
using namespace std;


int ReadBase()
{
	int num;
	cout << "Enter Base Number : ";
	cin >> num;
	return num;
}
int ReadPower()
{
	int num;
	cout << "Enter Power Number : ";
	cin >> num;
	return num;
}

int CalcluateResult(int M, int N)
{
	if (M == 0)
	{
		return 1;
	}

	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P *= N;
	}
	return P;
}


int main()
{

	cout << "Result = " << CalcluateResult( ReadPower(), /* This function will excute first --->*/ReadBase() );



	cout << endl << endl;
	return 0;
}
