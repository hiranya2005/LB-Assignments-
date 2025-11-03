// 2. Write a program that accepts a number from user and prints its number line

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t" , iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

// Time complexity: O(N)