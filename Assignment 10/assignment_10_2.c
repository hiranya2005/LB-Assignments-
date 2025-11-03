// 2. Write a program which accept width & Height of a rectange and calculate its area

#include<stdio.h>

double RectArea(float iNo , float iNo2)
{

    double area = 0.0;

    area = iNo * iNo2;

    return area;

}

int main()
{
    float fWidth = 0.0;
    float fHeight = 0.0;
    double dRet = 0.0;

    printf("Enter Height: ");
    scanf("%f" , &fHeight);

    printf("Enter Width: ");
    scanf("%f" , &fWidth);

    dRet = RectArea(fHeight , fWidth);

    printf("Area of Rectangle is: %lf" , dRet);

    return 0;
}