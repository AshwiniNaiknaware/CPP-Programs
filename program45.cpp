#include <iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int iValue = 0;
    bool bRet;

    cout << "Enter Number\n";
    cin >> iValue;

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        cout << iValue << " is a Prime Number\n";
    }
    else
    {
        cout << iValue << " is not a prime Number\n";
    }

    return 0;
}