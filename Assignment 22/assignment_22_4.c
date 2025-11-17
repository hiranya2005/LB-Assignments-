// 4. Accept N number from user and return frequency of 11 from it

#include<stdio.h>
#include<stdlib.h>

int CountEleven(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int *ptr = 0;

    printf("Enter number of elemnts: \n");
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

    iRet = CountEleven(ptr , iLength);

    printf("Frequency of 11 is: %d\n" , iRet);

    free(ptr);

    return 0;
}
