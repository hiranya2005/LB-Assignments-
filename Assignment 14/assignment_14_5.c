// 4. Write ap rogram which accept number from user and count frequency of numbers which are less than 6

#include<stdio.h>

int CountLessThanSix(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = CountLessThanSix(iValue);

    printf("%d\n" , iRet);

    return 0;
}