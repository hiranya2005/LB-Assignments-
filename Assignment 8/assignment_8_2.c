// 2. Accept single digit number from user and print it into words

#include<stdio.h>

void PrintWord(int iNo)
{
    switch (iNo)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    
    default:
        printf("INVALID");
        break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d" , &iValue);

    PrintWord(iValue);

    return 0;
}