// 3. Accept N number from user and check wether the number contains 11 or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEleven(int Arr[] , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
            break;
        }
    }

    return false;
}

int main()
{
    int iLength = 0 , iCnt = 0;
    bool bRet = false;
    int *ptr = NULL;

    printf("Enter number of Elements: \n");
    scanf("%d" , &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Enable to allocate memory!");
        return -1;
    }

    printf("Enter Elements: \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter Element %d: " , iCnt+1);
        scanf("%d\n" , &ptr[iCnt]);
    }

    bRet = CheckEleven(ptr , iLength);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(ptr);

    return 0;
}