#include <iostream>
#include <cmath>
#include <string>

using namespace std;


void PrintMyCard()
{
	cout << "**********************************\n";

	cout << "*   Name   : Reda Hilal          *\n";
	cout << "*   Age    : 18 Years            *\n";
	cout << "*   City   : Muscat              *\n";
	cout << "*   Coutry : Oman                *\n";

	cout << "**********************************\n";
}

void PrintStars()
{
	cout << "********************\n********************\n********************\n********************\n";
}

void Print_H()
{
	cout << "*\t*\n";
	cout << "*\t*\n";
	cout << "*********\n";
	cout << "*\t*\n";
	cout << "*\t*\n";
}

void MySumProcedure()
{

	int Num1,Num2, result;

	cout << "enter num1 \n";
	cin >> Num1;

	cout << "enter num2 \n";
	cin >> Num2;

	result = Num1 + Num2;
	cout << "\nResult = " << result;
}

int MySumFunction(int a, int b)
{

	return  a + b;
}

string MyStringFunction()
{
	return "hello world!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";


}








int main()
{

	int num1, num2;
	cin >> num1 >> num2;


	cout << MySumFunction(num1,num2);
































	cout << endl << endl;

	return 0;
}
