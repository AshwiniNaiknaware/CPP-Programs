//1  4000
//2  8000
//5  20000
//10 40000

#include<iostream>
using namespace std;

void jwelersPortal(int iWeight)
{
    switch (iWeight)
    {
        case 1:
        cout<<"Your bill amount is 4000\n";
        break;

        case 2:
         cout<<"Your bill amount is 8000\n";
        break;

        case 5:
        cout<<"Your bill amount is 20000\n";
        break;

        case 10:
        cout<<"Your bill amount is 40000\n";
        break;

        default:
        printf("Invalid Weight\n");
        break;
    }
}

int main()
{
   int iValue = 0;

   cout<<"Enter the gold coin size you want to purchase\n";
   cin>>iValue;

   jwelersPortal(iValue);

    return 0;
}