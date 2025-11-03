// 1. Check Even or Odd

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    if(iNo %2 == 0)
    {
        printf("Given number is Even...");
    }
    else
    {
        printf("Given number is Odd...");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);
    CheckEvenOdd(iValue);

    return 0;
}