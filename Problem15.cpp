// a program that calculate the rectangle area

#include <iostream>
using namespace std;

void ReadNums(float& A,float& B)
{
    cout << "enter the value for A\n";
    cin >> A;

    cout << "enter the value for B\n";
    cin >> B;
}

float Rectangle_Area(float A, float B)
{
    return A * B;
}

void PrintResult(float Result)
{
    cout << "\nRectangle Area is " << Result;
}

int main()
{
    float A, B;
    ReadNums(A, B);
    PrintResult(Rectangle_Area(A, B));
    

    cout << endl << endl << endl;
    return 0;
}


