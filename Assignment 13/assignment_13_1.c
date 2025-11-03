// 1.  Print all numbers from 1 to N

#include<stdio.h>

void PrintNumbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t" , iCnt);
    }
}

int main()
{
    int limit = 0;

    printf("Enter a Number: ");
    scanf("%d" , &limit);

    PrintNumbers(limit);

    return 0;
}