// 4. Sum of all even factors of a number(exclude number itself)

#include<stdio.h>

int SumOfEvenFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 2 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
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

    iRet = SumOfEvenFactors(iValue);

    printf("Sum of even factors are: %d" , iRet);

    return 0;
}