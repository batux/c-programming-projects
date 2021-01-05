#include <stdio.h>

int a = 100;

void foo()
{
    int a  = 25;
    printf("function scope a : %d\n", a);
}

void globalScope()
{
    printf("global scope a : %d \n", a);
}

void sum(int a, int b)
{
    int c = 0;
    
    a = a * 2;
    b = b * 2;

    c = a + b;
    printf("total : %d \n", c);
}

int main()
{
    int a = 10;

    {
        int a = 20;
        printf("local scope a : %d\n", a);
    }

    printf("upper scope a : %d\n", a);
    foo();
    globalScope();

    int x = 100;
    int y = 200;
    sum(x, y);

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}