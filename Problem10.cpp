// a program that print the average of 3 numbers
#include <iostream>
using namespace std;

void ReadNumber(int& num1, int& num2, int& num3)
{
    cout << "Please Enter Number 1 : ";
    cin >> num1;
    cout << "Please Enter Number 2 : ";
    cin >> num2;
    cout << "Please Enter Number 3 : ";
    cin >> num3;
    cout << endl << endl;
}

int SumOf3Numbers(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

float CalCulateAvrage(int num1, int num2, int num3)
{
    return (float)SumOf3Numbers(num1, num2, num3) / 3;
}

void PrintResult(int num1, int num2, int num3)
{
    cout << "The Avreage = " << CalCulateAvrage(num1, num2, num3) << endl;
}

int main()
{
    int num1, num2, num3;
    ReadNumber(num1, num2, num3);
    PrintResult(num1, num2, num3);


    return 0;
}
