// 3. Write a program to accept a number and display its non factors

#include<stdio.h>

void DisplayNonFactor(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d " , iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d" , &iValue);

    DisplayNonFactor(iValue);

    return 0;
}