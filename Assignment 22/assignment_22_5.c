// 5. Accept N number from user and accept another number from user as NO ,return frequency of NO

#include<stdio.h>
#include<stdlib.h>

int CountNO(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0 , iCnt = 0 , iNO = 0;
    int iRet = 0;
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

    iRet = CountNO(ptr , iLength , iNO);

    printf("Frequency of NO is: %d\n" , iRet);

    free(ptr);

    return 0;
}
