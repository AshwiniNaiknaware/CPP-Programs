//iNo = 98675

#include<iostream>
using namespace std;

void DisplayEven(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            cout<<iDigit;
        }
        iNo = iNo /10;
    }
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter the number\n";
    cin>>iValue;

    DisplayEven(iValue);
} 

