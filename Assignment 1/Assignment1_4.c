// Accept one number and check whether it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDivision(int iNo)
{
    if(iNo % 5 == 0)
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

    bRet = CheckDivision(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5\n" , iValue);
    }
    else
    {
        printf("%d is Not Divisible by 5\n" , iValue);
    }

    return 0;
}