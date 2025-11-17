// 1. Accept N number from user and accept another number from user as NO, check wether NO is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckNO(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
            break;
        }
    }

    return false;
}

int main()
{
    int iLength = 0 , iCnt = 0 , iNO = 0;
    bool bRet = false;
    int *ptr = 0;

    printf("Enter number of elemnts: \n");
    scanf("%d" , &iLength);

    printf("Enter number NO: \n");
    scanf("%d" , &iNO);

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

    bRet = CheckNO(ptr , iLength , iNO);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(ptr);

    return 0;
}