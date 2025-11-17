// 1. Accept N number from user and return difference between summation of even and odd elements

#include<stdio.h>
#include<stdlib.h>

int SummationDifference(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iEven = 0 , iOdd = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven += Arr[iCnt];
        }
        else
        {
            iOdd += Arr[iCnt];
        }
    }

    return iEven - iOdd;
}

int main()
{
    int iLength = 0 , iCnt = 0;
    int iRet = 0;
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

    iRet = SummationDifference(ptr , iLength);

    printf("Difference between Even And Odd element Addition is: %d\n" , iRet);

    free(ptr);

    return 0;
}