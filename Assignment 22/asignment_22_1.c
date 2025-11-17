// 1. Accept N numbers from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0 , iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the Number of elements: \n");
    scanf("%d" , &iLength);

    ptr = (int *)malloc(iLength *sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate memory!");
        return -1;
    }

    printf("Enter Elements: \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter Element %d: " , iCnt + 1);
        scanf("%d" , &ptr[iCnt]);
    }

    iRet = CountEven(ptr , iLength);

    printf("Number of even elemts are: %d" , iRet);

    free(ptr);

    return 0;
}
