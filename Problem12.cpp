// A program that print the Bigger Number 

#include <iostream>
using namespace std;

void ReadNumbers(int& num1,int& num2)
{
    
    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
}
int CheckBiggerNumber(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void PrintResult(int MaxNumber)
{
    cout << "\nThe Bigger Number is : " << MaxNumber;
}

int main()
{
    int num1, num2;
    ReadNumbers(num1, num2);
    PrintResult(CheckBiggerNumber(num1, num2));






    cout << endl << endl;
    return 0;
}
