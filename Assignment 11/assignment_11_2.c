// 2. Write a program which accept range from user and print enven numbers in that range

#include<stdio.h>

void DisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("INVALID");
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d\t" , iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Strating point number: ");
    scanf("%d" , &iValue1);

    printf("Enter Ending point number: ");
    scanf("%d" , &iValue2);

    DisplayEven(iValue1 , iValue2);

    return 0;
}