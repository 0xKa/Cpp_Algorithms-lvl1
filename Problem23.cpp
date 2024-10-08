
// a program that calculate the circle area with a triangle inside given a, b, c

#include <iostream>
#include <cmath>

using namespace std;
const float PI = 3.141592;

void ReadInput(float& a, float& b, float& c)
{
    cout << "please enter a value for \'A\'\n";
    cin >> a;

    cout << "please enter a value for \'B\'\n";
    cin >> b;

    cout << "please enter a value for \'C\'\n";
    cin >> c;

}

float CircleArea(float a, float b, float c)
{
    float P;
    P = ((a + b + c) / 2);
    return PI * pow((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))), 2);
}

void PrintResult(float Result)
{
    cout << "the area of the circle is " << Result;
}

int main()
{
    float a, b, c;
    ReadInput(a, b, c);
    PrintResult(CircleArea(a, b, c));


    return 0;
}
