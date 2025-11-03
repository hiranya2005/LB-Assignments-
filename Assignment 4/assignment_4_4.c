// 4. Write aprogram which accept a number from user and return summation of all its non factors

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
       if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    iRet = SumFactors(iValue);

    printf("%d" , iRet);

    return 0;
}