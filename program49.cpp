// program to print number of digits in entered number

#include <iostream>
using namespace std;

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iDigCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10; // it gives remainder
        iDigCnt++;         // count of number of digits
        iNo = iNo / 10;    // it gives quotient
    }
    return iDigCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number\n";
    cin >> iValue;

    iRet = CountDigit(iValue);

    cout << "Number of Digits are " << iRet;

    return 0;
}