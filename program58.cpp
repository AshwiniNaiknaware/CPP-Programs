#include<iostream>
using namespace std;

typedef unsigned long int ULONG;   // use of typedef

ULONG Power(int iNo1, int iNo2)
{
    ULONG lMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        lMult = lMult * iNo1;
    }
    return lMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG lRet = 0;

    cout<<"Enter base ";
    cin>>iValue1;

    cout<<"Enter the power ";
    cin>>iValue2;

    lRet = Power(iValue1, iValue2);

    printf("Result is : %ld\n",lRet);

    return 0;
}



