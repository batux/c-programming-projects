#include <stdio.h>

int main()
{
    int numbers[5];
    int length = sizeof(numbers) / sizeof(int);

    for(int i=0; i < length; i++)
    {
        printf("Enter number:\n");
        scanf("%d", &numbers[i]);
    }

    printf("\nArray items: ");

    for(int i=0; i < length; i++)
    {
        printf(" %d ", numbers[i]);
    }

    return 0;
}