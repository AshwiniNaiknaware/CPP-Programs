// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

/*
    START
        Accept one number as no1
        Acccept another number as no2

        Create one variable as Mult
        Set the value 1 in the variable Mult

        Create one countrer as cnt
        Set the counter to 1

        LOOP:
        Itreate till the counter is less than or equal to no2
            mult = Mult * no1
            increment the counter by 1
        Goto LOOP

        Display the value of mult
    END

    no1 = 2
    no2 = 4
    mult = 1

    mult = mult * no1
    mult = mult * no1
    mult = mult * no1
    mult = mult * no1

    for(cnt = 1; cnt <= no2; cnt++)
    {
        mult = mult * no1;
    }
*/

#include<iostream>
using namespace std;

unsigned long int Power(int iNo1, int iNo2)    //only give unsigned
{
    unsigned long int iMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    unsigned long int iRet = 0;   //datatype modifire -- long

    cout<<"Enter the base number "<<endl;
    cin>>iValue1;

    cout<<"Enter the power number "<<endl;
    cin>>iValue2;

    iRet = Power(iValue1, iValue2);

    cout<<"Result is : "<<iRet;

    return 0;
}