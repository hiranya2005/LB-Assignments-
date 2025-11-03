// 4. Find Sum of first N Even numbers

#include<stdio.h>

int SumOfEvenNumbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }     
    }

    return iSum;
}

int main()
{
    int limit = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d" , &limit);

    iRet = SumOfEvenNumbers(limit);
    
    printf("Sum of Even number is: %d\n" , iRet);

    return 0;
}