// 4. Accept one character from user and convert case of the character

#include<stdio.h>

void ConvertCase(char cVal)
{

    if(cVal >= 'A' && cVal <= 'Z')      
    {
        cVal = cVal + 32;                 
        printf("Converted character: %c\n", cVal);
    }
    else if(cVal >= 'a' && cVal <= 'z')  
    {
        cVal = cVal - 32;                
        printf("Converted character: %c\n", cVal);
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c" , &cValue);

    ConvertCase(cValue);

    return 0;
}