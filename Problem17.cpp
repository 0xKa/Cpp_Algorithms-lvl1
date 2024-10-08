// a program that calculate the trinagle area suiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

#include <iostream>
using namespace std;


void ReadInput(float& A,float& H)
{
    cout << "enter the value for A\n";
    cin >> A;

    cout << "enter the value for H\n";
    cin >> H;

}

float CalculateTrinagleArea(float A,float H)
{
    return (A * H) / 2;
}

void Printresult(float result) 
{
    cout << "Result = " << result;

}

int main()
{
    float A, H;
    ReadInput(A, H);
    Printresult(CalculateTrinagleArea(A, H));



    cout << endl << endl << endl;
    return 0;
}


