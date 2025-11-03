// 1. Write a program to accept radius of circle from user and calculate its area. Consider value pi as 3.14

#include<stdio.h>

double CircleArea(float fNo)
{

    double area = 0.0;

    area = fNo * fNo * 3.14;
    return area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter a number: ");
    scanf("%f" , &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is: %lf" , dRet);

    return 0;
}