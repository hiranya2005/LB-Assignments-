// 5. Accept N number from user and return product of all Odd elemnts

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct *= Arr[iCnt];
        }
    }

    if(iProduct == 1)
    {
        return 0;
    }

    return iProduct;
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

    iRet = Product(ptr , iLength);

    printf("Product of Odd elements is: %d\n" , iRet);

    free(ptr);

    return 0;
}