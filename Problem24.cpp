// a program to cheack if age is valid or not 

#include <iostream>
using namespace std;

int ReadAge()
{
    short age;
    cout << "please enter your age : ";
    cin >> age;
    return age;
}

bool ValidateNumberInRange(int num, int From, int To)
{
    return num >= From && num <= To;
}

void PrintResult(short age)
{
    if (ValidateNumberInRange(age, 18, 45))
        cout << "\nVALID AGE\n";
    else
        cout << "\nINVALID AGE\n";
}

int main()
{
    PrintResult(ReadAge());

    

    return 0;
}

