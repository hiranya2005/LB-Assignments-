// 3. Check leap year

#include<stdio.h>

void CheckLeapYear(int iNo)
{

    if(iNo % 400 == 0 ||  iNo % 4 == 0)
    {
        printf("%d is a leap year..." , iNo);
    }
    else 
    {
        printf("%d Not a leap year..." , iNo);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a year: ");
    scanf("%d" , &iValue);

    CheckLeapYear(iValue);

    return 0;
}