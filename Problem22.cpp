// a program that calculate the circle area inscribed in an isosceles triangle.

#include <iostream>
#include <cmath>

using namespace std;
const float PI = 3.141592;

void ReadInput(float& a, float& b)
{

    cout << "please enter a value for \'A\'\n";
    cin >> a;

    cout << "please enter a value for \'B\'\n";
    cin >> b;

}

float CircleArea(float a,float b)
{
    return PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void PrintResult(float result)
{
    cout << "the area of the circle is " << result << endl;

}

int main()
{
    float a, b;
    ReadInput(a, b);
    PrintResult(CircleArea(a, b));



    return 0;
}
