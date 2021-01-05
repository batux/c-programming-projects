#include <stdio.h>

int main()
{
    int numbers[5];
    int length = sizeof(numbers) / sizeof(int);

    int *p1;

    p1 = numbers;

    for(int i = 0; i < length; i++)
    {
        printf(" &numbers[%d] = %p, numbers[%i] = %d \n", i, &numbers[i], i, numbers[i]);
    }

    printf("The memory address of 'numbers' array: %p \n", &numbers);


    for(int i = 0; i < length; i++)
    {
        printf(" (p1 + %d) = %p,  *(p1 + %d) = %d \n", i, (p1 + i), i, *(p1 + i) );
    }

    printf("Also you dont need any other pointer variable, you can use the variable name of array as a pointer! \n");
    for(int i = 0; i < length; i++)
    {
        printf(" (numbers + %d) = %p,  *(numbers + %d) = %d \n", i, (numbers + i), i, *(numbers + i) );
    }

    return 0;
}