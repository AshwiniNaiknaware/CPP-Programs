// Count the factors of number

#include <iostream>
using namespace std;

int CountFact(int iNo)
{
    int iFactCnt = 0;
    int iCnt = 0;

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++) // iCnt starts from 2
    {
        if (iNo % iCnt == 0)
        {
            cout << iCnt << endl;
            iFactCnt++;
        }
    }
    return iFactCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number\n";
    cin >> iValue;

    iRet = CountFact(iValue);

    cout << "Number of Factors are : " << iRet << endl;

    return 0;
}