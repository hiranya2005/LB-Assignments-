// 4. Write a program which accepts number from user and return multiplication of it

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMulti *= iDigit;
        
        iNo = iNo / 10;
    }

    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d" , &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits is: %d\n" , iRet);

    return 0;
}