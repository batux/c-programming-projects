#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT       5

void dynamicArray()
{
    int n1 = 5;
    int *ptr;

    ptr = (int *) malloc(n1 * sizeof(int));

    for(int i = 0; i < n1; ++i)
    {
        scanf("%d", (ptr + i));
    }

    for(int i = 0; i < n1; ++i)
    {
        printf("i:%d - val: %d \n", i, *(ptr + i));
    }

    int lastUsableIndex = n1;
    while(1)
    {
        int n2 = 0;
        printf("Define new size of array: \n");
        scanf("%d", &n2);
        printf("new size: %d \n", n2);

        if(n2 == 0)
        {
            break;
        }

        ptr = (int *) realloc(ptr, (n2 * sizeof(int)));

        for(int i = lastUsableIndex; i < n2; ++i)
        {
            scanf("%d", (ptr + i));
        }

        for(int i = 0; i < n2; ++i)
        {
            printf("i:%d - val: %d \n", i, *(ptr + i));
        }

        lastUsableIndex = n2;
    }

    free(ptr);
}

int main()
{
    dynamicArray();
    return 0;
}