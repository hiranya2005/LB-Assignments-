// 5. Write a program which accept range from user and display all numbers in that range in reverse order

#include<stdio.h>

void DisplayReverse(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("INVALID RANGE\n");
    }

    for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
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

    DisplayReverse(iValue1 , iValue2);

    return 0;
}