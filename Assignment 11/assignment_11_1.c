// 1. Write a program which accept range from user and display number between that range

#include<stdio.h>

void Display(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("INVALID");
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        printf("%d\t" , iCnt);
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Strating point number: ");
    scanf("%d" , &iValue1);

    printf("Enter Ending point number: ");
    scanf("%d" , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}