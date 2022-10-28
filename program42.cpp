// Count the factors of number

#include <iostream>
using namespace std;

int CountFact(int iNo)
{
    int iCnt = 0;
    int iCntFact = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++) // changen
    {
        if (iNo % iCnt == 0)
        {
            iCntFact++;
        }
    }
    return iCntFact;
}

bool ChekPrime(int iNo)
{
    int iRet = 0;

    iRet = CountFact(iNo);

    if (iRet == 1) // Change
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
    bool bRet = false;

    cout << "Enter the number\n";
    cin >> iValue;

    bRet = ChekPrime(iValue);

    if (bRet == true)
    {
        cout << iValue << " is Prime Number\n";
    }
    else
    {
        cout << iValue << " is Not Prime Number\n";
    }

    return 0;
}