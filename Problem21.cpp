
// A program that calculate the circle area along the circumfernce(المحيط)

#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.141592;

float ReadInput()
{
    float l;

    cout << "please enter a value for \'l\'\n";
    cin >> l;
    return l;

}

float CircleArea(float l)
{
    return (pow(l, 2)) / (4 * PI);
}

void PrintResult(float Result)
{

    cout << "the area of the circle is " << Result << endl;

}

int main()
{
    PrintResult(CircleArea(ReadInput()));

    return 0;
}
