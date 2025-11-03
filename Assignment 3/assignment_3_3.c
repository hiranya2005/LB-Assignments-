// 3. Write a program which accept number from user and print even factors of that user

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d " , iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    DisplayEvenFactors(iValue);

    return 0;
}