// 3. Accept N number from user and return difference between smallest and largest

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt = 1 ; iCnt < iSize ; iCnt++)
    {   
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMax - iMin;
 
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

    iRet = Difference(ptr , iLength);

    printf("Difference between largest and Smallest element is: %d\n" , iRet);

    free(ptr);

    return 0;
}