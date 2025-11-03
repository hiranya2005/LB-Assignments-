// 1. Write a program to accept a number from user and display its multiplication of factors

#include<stdio.h>

int MultiplicationFactors(int iNo)
{
    int iCnt = 0;
    int Multiply = 1;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            Multiply = Multiply * iCnt;
        }
    }
    return Multiply;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d" , &iValue);

    iRet = MultiplicationFactors(iValue);
    printf("Multiplication of Factors is: %d" , iRet);

    return 0;
}