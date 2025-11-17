// 5. Accept N number from user and and display summation of digits of each numbers

#include<stdio.h>
#include<stdlib.h>

void DisplaySummationOfDigits(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    int iTemp = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {  
        iSum = 0;
        iTemp = Arr[iCnt];                  // Original alue will remain same of an array element.

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum += iDigit;

            iTemp = iTemp / 10;

        }

        printf("%d\t" , iSum);
    }

}

int main()
{
    int iLength = 0 , iCnt = 0;
    int *ptr = 0;

    printf("Enter number of elements: \n");
    scanf("%d" , &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to Allocate memory!");
        return -1;
    }

    printf("Enter Elelments: \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter Element %d: " , iCnt + 1);
        scanf("%d" , &ptr[iCnt]);
    }

    DisplaySummationOfDigits(ptr , iLength);

    free(ptr);

    return 0;
}