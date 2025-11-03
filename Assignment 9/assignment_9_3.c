// 3. Write a program to find even factorial of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iFactorial *= iCnt;
        }
    }

    return iFactorial;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d" , &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is: %d\n" , iRet);

    return 0;
}