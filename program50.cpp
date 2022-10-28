// Accept number from user and return summation of its digits

#include <iostream>
using namespace std;

int SumDigit(int iNo)
{
    int iDigit = 0, iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit; // to Sum Digits
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter  Number\n";
    cin >> iValue;

    iRet = SumDigit(iValue);

    cout << "Summation of didgits are : " << iRet;

    return 0;
}
/*
iNo = 98675
*/