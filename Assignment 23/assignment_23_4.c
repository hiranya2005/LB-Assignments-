// 4. Accept N number from user and accept range, Display all elements in that range

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iSize , int iStart ,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d " , Arr[iCnt]);
        }
    }

    
}

int main()
{
    int iLength = 0 , iCnt = 0 , iValue1 = 0 , iValue2 = 0;
    int *ptr = 0;

    printf("Enter number of elements: \n");
    scanf("%d" , &iLength);

    printf("Enter number First number: \n");
    scanf("%d" , &iValue1);

    printf("Enter number Last number: \n");
    scanf("%d" , &iValue2);

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

    Display(ptr , iLength , iValue1 , iValue2);

    free(ptr);

    return 0;
}