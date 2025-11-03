// 4. Find Sum of first N natural numbers

#include<stdio.h>

int SumOfNumbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int limit = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d" , &limit);

    iRet = SumOfNumbers(limit);
    
    printf("Sum of upto given number is: %d\n" , iRet);

    return 0;
}