#include<iostream>
using namespace std;

void Display(int ptr[])  // use of subscript operator instead of * operator [change]
{
    cout<<"elements of array are\n";

    register int iCnt = 0;
     
    //       1         2       3
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<*(ptr+iCnt)<<endl;    //4    //[change] 
        ptr++;
    }
}

int main()
{
    int Arr[5];
    register int iCnt = 0;

    cout<<"Elements of array are\n";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Display(Arr);   //Display(100);

    return 0;
}