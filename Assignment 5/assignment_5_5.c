// 5. Find largest among three numbers

#include<stdio.h>

int CheckLargest(int iNo1 , int iNo2 , int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }

}

int main()
{
    int iVal1 = 0 , iVal2 = 0 , iVal3 = 0;
    int iRet = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d" , &iVal1, &iVal2, &iVal3);

    iRet = CheckLargest(iVal1, iVal2, iVal3);

    printf("Largest number is: %d\n" , iRet);

    return 0;
}