// 2. Write a program which accept a number from user and check wether it contains 0 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return true;
        }

        iNo = iNo / 10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number: ");
    scanf("%d" , &iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("It does not contain Zero");
    }

    return 0;
}