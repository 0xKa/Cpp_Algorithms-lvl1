//a program that calculate the circle area (بأستخدام طول القطر)

#include <iostream>
#include <cmath>

using namespace std;
const float PI = 3.1415;

void ReadInput(float& D)
{
    cout << "please enter a value for \"D\" -----> ";
    cin >> D;

}

float CircleArea(float D)
{

    float Result;
    Result = (PI * pow(D, 2)) / 4;

    return Result;
}

void PrintResult( float result)
{
    cout << "the area of the circle is :  " << result;


}

int main()
{
    float D;
    ReadInput(D);
    PrintResult(CircleArea(D));


    cout << endl << endl;
    return 0;
}


