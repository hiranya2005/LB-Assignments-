// 3. Write a program which accepts range from user and return addition of numbers in between the range(Range should contain +ve numbers only)

#include<stdio.h>

int AddPositive(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("INVALID RANGE\n");
        return 0;
    }
    else
    {
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            iSum = iSum + iCnt;
        }
    }   

    return iSum;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    printf("Enter Strating point number: ");
    scanf("%d" , &iValue1);

    printf("Enter Ending point number: ");
    scanf("%d" , &iValue2);

    iRet = AddPositive(iValue1 , iValue2);

    if(iRet != 0)
    {
    printf("The Addition of given range is : %d\n" , iRet);
    }

    return 0;
}