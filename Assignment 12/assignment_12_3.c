// 3. Sum of total factors of a number

#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a Number: ");
    scanf("%d" , &iValue);

    iRet = CountFactors(iValue);

    printf("Sum of Total factors are: %d" , iRet);

    return 0;
}