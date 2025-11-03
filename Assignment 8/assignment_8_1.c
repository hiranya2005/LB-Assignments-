// 1. Write a program which accepts number from user and if number is less than 50 the print small, if greater than 50 and small than 100
// then print medium if its greater than 100 then print large

#include<stdio.h>

void Comparision(int iNo)
{

    if(iNo <= 50)
    {
        printf("Smaller...");
    }
    else if( iNo > 50 && iNo <= 100)
    {
        printf("Medium...");
    }
    else if(iNo > 100)
    {
        printf("Large...");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    Comparision(iValue);

    return 0;
}