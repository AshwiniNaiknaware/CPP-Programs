// Check if the number is prime or not

#include <iostream>
using namespace std;

int CountFactor(int iNo)
{
    int iCnt = 0;

    int iFactCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}

bool CheckPrime(int iNo)
{
    int iRet = 0;

    iRet = CountFactor(iNo);

    if (iRet == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet;

    cout << "Enter the number\n";
    cin >> iValue;

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        cout << iValue << " is Prime Number\n";
    }
    else
    {
        cout << iValue << " is not Prime NUmber\n";
    }

    return 0;
}