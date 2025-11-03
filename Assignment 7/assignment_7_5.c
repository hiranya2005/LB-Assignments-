// 5. Write a program which accepts N and prints first five multiples of N

#include<stdio.h>

void DisplayMultiple(int iNo)
{

    int iCnt = 0;
    int iCount = 1;

    for(iCnt = 1 ; iCnt <=5 ; iCnt++)
    {
        iCount = iNo * iCnt;
        printf("%d\t" , iCount);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    DisplayMultiple(iValue);

    return 0;
}

// Time Complexity: O(N)