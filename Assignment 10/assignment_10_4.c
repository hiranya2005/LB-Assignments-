// 4. Write program which accept temperature into farenhiet and convert into celsius

#include<stdio.h>

double FhToC(float fNo)
{

    double dCelcius = 0.0;

    dCelcius = (fNo - 32.0f) * (5.0f / 9.0f);

    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Farenheit: ");
    scanf("%f" , &fValue);

    dRet = FhToC(fValue);
    
    printf("Temperature in celcius is: %lf" , dRet);

    return 0;
}