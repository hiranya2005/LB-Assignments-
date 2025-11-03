// 3. Write a program which accept number from user and return the count of digits inbetween 3 & 7

#include<stdio.h>

int CountInBetween(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountInBetween(iValue);

    printf("%d\n" , iRet);

    return 0;
}