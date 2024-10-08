//a program that calculate the circle area

#include <iostream>
#include <cmath>

using namespace std;
const float PI = 3.1415;

void ReadInput(float& r)
{
    cout << "please enter a value for \"r\" -----> ";
    cin >> r;

}

float CircleArea(float r)
{
    float Result;
    Result = PI * pow(r, 2);

    return Result;
}

void PrintResult(float result)
{
    cout << "the area of the circle is " << result;

}



int main()
{
    float r;

    ReadInput(r);
    PrintResult(CircleArea(r));





    cout << endl << endl;
    return 0;
}


