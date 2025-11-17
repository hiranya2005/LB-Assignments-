// 1. Accept N number from user and return largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
 
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

    iRet = Maximum(ptr , iLength);

    printf("Largest element is: %d\n" , iRet);

    free(ptr);

    return 0;
}