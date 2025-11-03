// 4. Accept two numbers from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    } 

    for(iCnt = 1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d\n" , iNo);
    }
}
int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter number that to be printed: ");
    scanf("%d" , &iValue);

    printf("Enter how many time should print: ");
    scanf("%d" , &iCount);

    Display(iValue , iCount);


    return 0;
}