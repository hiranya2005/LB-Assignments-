// 5. Write a program which accepts number from user and return difference between summation of even and odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEven += iDigit;
        }
        else
        {
            iOdd += iDigit;
        }
        
        iNo = iNo / 10;
    }

    iDiff = iEven - iOdd;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d" , &iValue);

    iRet = CountDiff(iValue);

    printf("Diff of sum of odd and even digits is: %d\n" , iRet);

    return 0;
}