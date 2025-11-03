// 1. Write a program which accepts name from user and print that name

#include<stdio.h>

int main()
{
    char name[30];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your name is: %s" , name);

    return 0;
}

// Time complexity: O(N)