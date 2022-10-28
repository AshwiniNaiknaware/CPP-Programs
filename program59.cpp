#include "Header59.h"; 

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



