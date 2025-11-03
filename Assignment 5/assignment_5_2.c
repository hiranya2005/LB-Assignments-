// 2. Find maximum of two numbers

#include<stdio.h>

int FindMaximum(int iNo1 , int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iVal1 = 0 , iVal2 = 0;
    int iRet = 0;

    printf("Enter two numbers: ");
    scanf("%d %d" , &iVal1 , &iVal2);

    iRet = FindMaximum(iVal1 , iVal2);

    printf("Maximum number is: %d" , iRet);

    return 0;
}