// 2. Count total factors of a number

#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount ++;
        }
    }

    return iCount;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a Number: ");
    scanf("%d" , &iValue);

    iRet = CountFactors(iValue);

    printf("Total factors are: %d" , iRet);

    return 0;
}