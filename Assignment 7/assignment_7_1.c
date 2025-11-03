// 1. Accept number from user and print number of $ & * on screen

#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}