// 2. Accept N numbers from user and return diffrence between frequency of even and odd numbers

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iSize)
{
    int iCnt = 0;
    int eCount = 0 , oCount = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            eCount++;
        }
        else
        {
            oCount++;
        }
    }

    return (eCount - oCount);
}

int main()
{
    int iLength = 0 , iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter Number of Elements: \n");
    scanf("%d" , &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocte memory!");
        return -1;
    }

    printf("Enter the elements: \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter Elelment %d: " , iCnt+1);
        scanf("%d" , &ptr[iCnt]);
    }

    iRet = Frequency(ptr , iLength);

    printf("Difference between frequency is: %d\n" , iRet);

    free(ptr);

    return 0;
}