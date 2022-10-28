#include<iostream>
using namespace std;

void Display(int Arr[])
{
    int iCnt = 0;

    cout<<"Elements of Array are : \n";

    //      1         2        3
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<endl;    //4
    }
}

int main()
{
    int Brr[5];

    int iCnt = 0;

    cout<<"Enter elements\n";

    for(iCnt = 0; iCnt<5; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    Display(Brr);   // Display(100);
    // Add(iValue1,iValue2);

    return 0;
}