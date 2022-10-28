//Display of Non factors of enetred number 

#include<iostream>
using namespace std;

void DisplayFator(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<iNo; iCnt++)  //Time Complexity can not be reduced 
    {
        if((iNo % iCnt) != 0)
        {
            cout<<iCnt<<" ";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number\n";
    cin>>iValue;

    DisplayFator(iValue);

    return 0;
}

