// 1. Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void DisplayEven(int iNo)
{
    int iCnt = 1;
    int iCount = 0;

    if(iNo <= 0)
    {
        return;
    }

    while(iCount < iNo)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n" , iCnt);
            iCount++;
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    DisplayEven(iValue);

    return 0;
}