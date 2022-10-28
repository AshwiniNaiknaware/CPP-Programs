// check number is rime or not

#include <iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            break;
        }
    }
    if (iCnt == (iNo / 2) + 1)
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

    cout << "Enter the Number\n";
    cin >> iValue;

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        cout << "is Prime Number\n";
    }
    else
    {
        cout << "is not prime Number\n";
    }

    return 0;
}