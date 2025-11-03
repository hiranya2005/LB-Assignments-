// 4. Write a program which accepts a number from user and display its table

#include<stdio.h>

void DisplayTable(int iNo)
{

    int iCnt = 0;
    int iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= 10 ; iCnt ++)
    {
        iTable = iNo * iCnt;
        printf("%d\t" , iTable);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    DisplayTable(iValue);

    return 0;
}