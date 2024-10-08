// a program that print number from N to 1

#include <iostream>
using namespace std;


int ReadInput()
{
    cout << "please enter a number that higher than 0 : ";
    int N;
    cin >> N;
    return N;
}

void PrintNumberNto1(int num)
{
    for (int counter = num; counter >= 1; counter--)
    {
        cout << counter << endl;
    }

}

int main()
{
    PrintNumberNto1(ReadInput());
    




    cout << endl << endl;
    return 0;
}

