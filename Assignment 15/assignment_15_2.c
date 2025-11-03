// 2. Write a program which accept number from user and return the count of odd digits

#include<stdio.h>

int CountOddDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    iRet = CountOddDigit(iValue);

    printf("%d\n" , iRet);

    return 0;
}