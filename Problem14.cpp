// a program that swap numbers using a temprory plate
#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& num1, int& num2)
{
    cout << "Please Enter the First Number: ";
    cin >> num1;
    cout << "Please Enter the Second Number: ";
    cin >> num2;
}
void SwapNumbers(int& num1, int& num2)
{
    int Temp;
    
    Temp = num1;
    num1 = num2;
    num2 = Temp;
}

void PrintNumbers(int num1, int num2)
{
    cout << endl << num1 << " <------> " << num2 << endl;
}

int main()
{
    int num1, num2;
    ReadNumbers(num1, num2);
    PrintNumbers(num1, num2);
    SwapNumbers(num1, num2);
    PrintNumbers(num1, num2);


    return 0;
}

