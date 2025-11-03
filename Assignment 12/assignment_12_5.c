// 5. Check if Number is divisible by 5

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
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

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("The given number %d is divisible by 5\n" , iValue);
    }
    else
    {
        printf("The given number %d is not divisible by 5\n" , iValue);
    }

    return 0;
}