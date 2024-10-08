// a program that calculate the avrage marks and print pass or fail

#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumber(int& num1, int& num2, int& num3)
{
    cout << "-Please Enter Mark 1 : ";
    cin >> num1;          
    cout << "-Please Enter Mark 2 : ";
    cin >> num2;          
    cout << "-Please Enter Mark 3 : ";
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

enPassFail CheckIfPass(int num1, int num2, int num3)
{
    if (CalCulateAvrage(num1, num2, num3) >= 50)
        return Pass;
    else
        return Fail;
}

void PrintResult(int num1, int num2, int num3)
{
    cout << "The Avreage = " << CalCulateAvrage(num1, num2, num3) << endl;

    if (CheckIfPass(num1, num2, num3) == Pass)
        cout << "\nYou Pass!\n";
    else
        cout << "\nYou Fail!\n";
}

int main()
{
    int mark1, mark2, mark3;
    ReadNumber(mark1, mark2, mark3);
    PrintResult(mark1, mark2, mark3);


    return 0;
}
