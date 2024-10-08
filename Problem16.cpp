// a program that calculate rectangle area through diagonal and side area of rectangle and print it on screen

#include <iostream>
#include <cmath>

using namespace std;

void ReadInput(float& num1,float& num2)
{
	cout << "enter first num: ";
	cin >> num1;
	cout << "enter second num: ";
	cin >> num2;
}

float RectangleArea(float a, float d)
{

	float result;
	result = a * sqrt(pow(d, 2) - pow(a, 2));

	return result;
}

void PrintResult(float result)
{
	cout << "The Result is " << result;
}

int main()
{
	float num1, num2;
	ReadInput(num1, num2);
	PrintResult(RectangleArea(num1, num2));


	cout << endl << endl;
	return 0;
}
