// 2. Accept amount in us dollar and return its corresponding value in indian currency (consider 1$ = 70rs)

#include<stdio.h>

int DollarToInr(int iNo)
{
    int iRupee = 0;

    iRupee = iNo * 70;

    return iRupee;              
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in US dollar: ");
    scanf("%d" , &iValue);

    iRet = DollarToInr(iValue); 

    printf("The Amount in INR: %d" , iRet);

    return 0;
}