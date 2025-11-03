// 4. Write a program which accepts three numbers and print its multiplication.

// Resolve (Erorr)

#include<stdio.h>

int NumMultiplication(int iNo1 , int iNo2 , int iNo3)
{
    int iResult = 0;

    if(iNo1 == 0 )
    {
        iNo1 = 1;
    }

    if(iNo2 == 0 )
    {
        iNo2 = 1;
    }

    if(iNo3 == 0 )
    {
        iNo3 = 1;
    }

    iResult = iNo1 * iNo2 * iNo3;

    return iResult;

}

int main()
{
    int iVal1 = 0 , iVal2 = 0 , iVal3 = 0;
    int iRet = 0;

    printf("Enter any three numbers: ");
    scanf("%d %d %d" , &iVal1, &iVal2, &iVal3);

    iRet = NumMultiplication(iVal1 , iVal2 , iVal3);

    printf("Multiplication of numbers is : %d" , iRet);

    return 0;
}
