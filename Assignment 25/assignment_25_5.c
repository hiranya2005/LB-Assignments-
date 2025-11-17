// 5. Accept N number from user and display as such elements which are multiples of 11

#include<stdio.h>
#include<stdlib.h>

void DisplayMultiplesOf11(int Arr[] , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d \t" , Arr[iCnt]);
        }
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

    DisplayMultiplesOf11(ptr , iLength);

    free(ptr);

    return 0;
}