// 4. Check positive, negetive or zero

#include<stdio.h>

void CheckNumType(int iNo)
{
    if(iNo > 0)
    {
        printf("Given number is Poistive...");
    }
    else if(iNo < 0)
    {
        printf("Given number is Negetive...");
    }
    else
    {
        printf("Given number is zero...");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    CheckNumType(iValue);

    return 0;
}