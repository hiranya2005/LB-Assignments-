// 1. Program to divide two number

#include<stdio.h>

int Divide(int iNo1 , int iNo2)
{
    int ans = 0;

    if(iNo2 < 0)
    {
        return -1;
    }

    ans = iNo1 / iNo2;
    return ans;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1 , iValue2);

    printf("Division is: %d\n" , iRet);

    return 0;
}