// a program that print number from 1 to N
#include <iostream>
using namespace std;

int ReadInput()
{
    int num = 0;
    cout << "Enter Any Number: ";
    cin >> num;
    return num;
}

void PrintNumbersFrom1toN(int num)
{
    for (int counterrrrrrrrrrrrrrrrrrrrrrrrrrrr = 1; counterrrrrrrrrrrrrrrrrrrrrrrrrrrr <= num; counterrrrrrrrrrrrrrrrrrrrrrrrrrrr++)
    {
        cout << counterrrrrrrrrrrrrrrrrrrrrrrrrrrr << endl;
    }

}

int main()
{
    PrintNumbersFrom1toN(ReadInput());

    cout << endl << endl;
    return 0;
}

