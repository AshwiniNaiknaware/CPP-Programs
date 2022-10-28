 //output  1 2 3 4 5

#include<iostream>
using namespace std;

void Display(int iNo)
{
   int iCnt = 1;

    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    
   while(iCnt<=iNo)
   {
       cout<<iCnt<<"\n";
       iCnt++;
   }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}