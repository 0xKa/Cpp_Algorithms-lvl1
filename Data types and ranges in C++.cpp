#include <iostream>
using namespace std;

int main()
{
    cout << "***********************(Sizes)***********************\n";
    cout << "the size of (bool) data type is " << sizeof(bool) << " byte" << endl;
    cout << "the size of (char) data type is " << sizeof(char) << " byte" << endl;
    cout << "the size of (short int) data type is " << sizeof(short) << " byte" << endl;
    cout << "the size of (int) data type is " << sizeof(int) << " byte" << endl;
    cout << "the size of (long int) data type is " << sizeof(long) << " byte" << endl;
    cout << "the size of (long long int) data type is " << sizeof(long long) << " byte" << endl;
    cout << "the size of (float) data type is " << sizeof(float) << " byte" << endl;
    cout << "the size of (double) data type is " << sizeof(double) << " byte" << endl;
    cout << "the size of (long double) data type is " << sizeof(long double) << " byte" << endl;
    cout << "the size of (string) data type is " << sizeof(string) << " byte" << endl;
    cout << "the size of (wchar_t) data type is " << sizeof(wchar_t) << " byte" << endl;
    cout << "*****************************************************\n\n";

    cout << "********************************(Ranges)********************************\n";

    cout << "char Range: ("<< CHAR_MIN << " , " << CHAR_MAX << ")\n";
    cout << "unsigned char Range: (" << 0 << " , " << UCHAR_MAX << ")\n";

    cout << "short int Range: (" << SHRT_MIN << " , " << SHRT_MAX << ")\n";
    cout << "unsigned short int Range: (" << 0 << " , " << USHRT_MAX << ")\n";

    cout << "int Range: (" << INT_MIN << " , " << INT_MAX << ")\n";
    cout << "unsigned int Range: (" << 0 << " , " << UINT_MAX << ")\n";

    cout << "long int Range: (" << LONG_MIN << " , " << LONG_MAX << ")\n";
    cout << "unsigned long int Range: (" << 0 << " , " << ULONG_MAX << ")\n";

    cout << "long long int Range: (" << LLONG_MIN << " , " << LLONG_MAX << ")\n";
    cout << "unsigned long long int Range: (" << 0 << " , " << ULLONG_MAX << ")\n";

    cout << "float Range: (" << FLT_MIN << " , " << FLT_MAX << ")\n";
    cout << "float(negative) Range: (" << -FLT_MIN << " , " << -FLT_MAX << ")\n";

    cout << "double Range: (" << DBL_MIN << " , " << DBL_MAX << ")\n";
    cout << "double(negative) Range: (" << -DBL_MIN << " , " << -DBL_MAX << ")\n";
    cout << "long double Range: (" << LDBL_MIN << " , " << LDBL_MAX << ")\n";

    cout << "************************************************************************\n";
    







    
    cout << "\n\n\n\n";
    return 0;
}

