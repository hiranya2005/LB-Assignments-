// 3. Write a program which accept distance in km and covert to meter

#include<stdio.h>

int KmToM(int iNo)
{
    int iConvert = 0;

    iConvert = iNo * 1000;

    return iConvert;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance in KM: ");
    scanf("%d" , &iValue);

    iRet = KmToM(iValue);

    printf("The distance in meter is: %d\n" , iRet);

    return 0;
}