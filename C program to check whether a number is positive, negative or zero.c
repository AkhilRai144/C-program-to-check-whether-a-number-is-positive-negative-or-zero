// C program to check whether a number is positive, negative or zero

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Integer: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is positive number", num);
    if (num < 0)
        printf("%d is negative number", num);
    if (num == 0)
        printf("This is Zero ");

    return 0;
}