// 4. Write a program which accepts a number from user and display its table in reverse order

#include<stdio.h>

void DisplayRevTable(int iNo)
{

    int iCnt = 0;
    int iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ; iCnt >= 1 ; iCnt --)
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

    DisplayRevTable(iValue);

    return 0;
}