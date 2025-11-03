// 5. Write a program which accept area in square feet and convert it into meters 

#include<stdio.h>

double SqureFeetToMeter(float fArea)
{
    double mArea = 0.0;

    mArea = fArea * 0.0929;

    return mArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%f" , &fValue);


    dRet = SqureFeetToMeter(fValue);

    printf("Area in meter is : %lf\n" , dRet);

    return 0;
}