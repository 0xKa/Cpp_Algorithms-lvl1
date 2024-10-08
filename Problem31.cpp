// a program that print the number to the power of 2, 3, 4, ...
#include <iostream>
#include <cmath>

using namespace std;

int ReadNumber()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;
    return num;
}

void PowerOfN(int num)
{
    int p[7];
    p[1] = num;
    p[2] = num * num;
    p[3] = num * num * num;
    p[4] = num * num * num * num;
    p[5] = num * num * num * num * num;
    p[6] = num * num * num * num * num * num;

    cout << "[ " << p[1] << " ]" << endl;
    cout << "[ " << p[2] << " ]" << endl;
    cout << "[ " << p[3] << " ]" << endl;
    cout << "[ " << p[4] << " ]" << endl;
    cout << "[ " << p[5] << " ]" << endl;
    cout << "[ " << p[6] << " ]" << endl;
}

int main()
{
    PowerOfN(ReadNumber());

    return 0;
}

