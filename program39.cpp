//check whether the number is prime number or not

#include<iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 26; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    cout<<"Ente the number\n";
    cin>>iValue;

    bRet = CheckPrime(iValue);
    
    if(bRet == true)
    {
        cout<<iValue<<" is Prime Number\n";
    }
    else
    {
        cout<<iValue<<" is Not Prime Number\n";
    }

    return 0;
}
