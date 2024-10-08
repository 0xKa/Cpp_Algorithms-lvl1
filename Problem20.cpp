// a program that calculate the circle area inscribed in a square


#include <iostream>
#include <cmath>


using namespace std;
const float PI = 3.141592;


float ReadInput()
{
    float A;
    cout << "please enter a value for \'A\'\n";
    cin >> A;
    return A;

}

float CircleArea(float A) 
{
    return PI * (pow((A / 2), 2)); // or area = (PI * pow(A, 2))/4 
}

void PrintResult(float result)
{
    cout << "the area of the circle is " << result;

}

int main()
{
    
    PrintResult(CircleArea(ReadInput()));
    
    

    return 0;
}
