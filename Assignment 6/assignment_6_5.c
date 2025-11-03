// 5. Write a program which accepts total marks and obtained marks from user and calculate percentage

#include<stdio.h>

float CalculatePercent(float iNo1 , float iNo2)
{
    float fPercent = 0.0;

    fPercent = (iNo2 / iNo1) * 100;

    return fPercent;
}

int main()
{
    int iVal1 = 0 , iVal2 = 0;
    float fRet = 0.0;

    printf("Enter total marks: ");
    scanf("%d" , &iVal1);

    printf("Enter obtained marks: ");
    scanf("%d" , &iVal2);

    fRet = CalculatePercent(iVal1 , iVal2);

    printf("Obtained percentage is: %.1f" , fRet);

    return 0;
}