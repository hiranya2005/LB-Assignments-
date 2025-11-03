// 2. Print all even numbers upto N

#include<stdio.h>

void PrintEvenNumber(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d\t" , iCnt);
        }
    }
}

int main()
{
    int limit = 0;

    printf("Enter a Number: ");
    scanf("%d" , &limit);

    PrintEvenNumber(limit);

    return 0;
}