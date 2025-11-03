// 2. Write a progam to accept a number from user and print its factors in descending order

#include<stdio.h>

void PrintFactors(int iNo)
{

    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo/2 ; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0 )
        {
            printf("%d ",iCnt);
        }
    } 


}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    PrintFactors(iValue);

    return 0;
}