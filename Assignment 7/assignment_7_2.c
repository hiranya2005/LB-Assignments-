// 2. Write a program that accepts a number from user and prints till that number

#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t" ,iCnt);
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