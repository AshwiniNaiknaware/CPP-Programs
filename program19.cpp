//program to display 1 to 5 on Screen
//output  1 2 3 4 5

#include<iostream>
using namespace std;

void Display()
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= 5; iCnt++)
   {
       cout<<iCnt<<"\n";
   }

}

int main()
{
    Display();
    
    return 0;
}