// 5. Accept number from user and check wether the number is even or odd

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("Given number is even...");
    }
    else
    {
        printf("Given number is Odd...");
    }

    return 0;
}