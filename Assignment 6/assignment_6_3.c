// 3. Write a program which accepts two numbers and check wether numbers are equal or not

#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1 , int iNo2)
{
    if(iNo1 == iNo2)
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
    int iVal1 = 0 , iVal2;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%d" , &iVal1);

    printf("Enter a number: ");
    scanf("%d" , &iVal2);

    bRet = CheckEqual(iVal1 , iVal2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}