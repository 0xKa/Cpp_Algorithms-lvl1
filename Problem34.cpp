/* a program tha calculate the commission of the total sales
1M --> 1%
500K to 1M --> 2%
100K to 500K --> 3%
50K to 100K --> 5%
otherwise --> 0%
*/

#include <iostream>
using namespace std;

float ReadInput()
{
    float TotalSales;
    cout << "Enter the Total Sales=\n";
    cin >> TotalSales;
    return TotalSales;
}

float GetCommissionPercent(float totalSales)
{

    if (totalSales >= 1000000)
        return 0.01;
    else if (totalSales >= 500000)
        return 0.02;
    else if (totalSales >= 100000)
        return 0.03;
    else if (totalSales >= 50000)
        return 0.05;
    else
        return 0;
}

float CalculateResult(float totalSales)
{
    return GetCommissionPercent(totalSales) * totalSales;
}


int main()
{
    float TotalSales = ReadInput();

    cout << "The Commission Percent is = " << GetCommissionPercent(TotalSales) << endl;
    cout << "The Total Sales will be = " << CalculateResult(TotalSales);


    cout << endl << endl;
    return 0;
}

