#include <stdio.h>

void swap(int *p1, int *p2);
void inc(int *number);
void dec(int *number);

int main()
{
    int a = 19;
    int b = 45;

    printf("Before swap\n");
    printf("a=%d", a);
    printf("b=%d", b);

    swap(&a, &b);

    printf("\nAfter swap\n");
    printf("a=%d", a);
    printf("b=%d", b);

    int x = 10;
    int *p1 = &x;

    inc(p1);
    printf("after inc op: %d \n", *p1);
    printf("after inc op x: %d \n", x);

    dec(p1);
    printf("after dec op: %d \n", *p1);
    printf("after dec op x: %d \n", x);

    return 0;
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void inc(int *number)
{
    (*number)++;
}

void dec(int *number)
{
    (*number)--;
}