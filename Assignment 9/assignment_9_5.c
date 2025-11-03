// 5. Write a program to find difference between even and odd factorial

#include<stdio.h>

int FactorialDifference(int iNo)
{
    int iCnt = 0;
    int iOFactorial = 1;
    int iEFactorial = 1;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iOFactorial *= iCnt;
        }
        else
        {
            iEFactorial *= iCnt;
        }
    }

    iResult = iEFactorial - iOFactorial;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    iRet = FactorialDifference(iValue);

    printf("The Difference between even and odd factorial is: %d\n" , iRet);

    return 0;
}