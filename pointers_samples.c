#include <stdio.h>

int main()
{
    int number = 66;
    char letter = 'k';
    double dd = 34.229292;

    printf("int val: %d\n", number);
    printf("int addr: %p\n", &number);

    printf("char val: %c\n", letter);
    printf("char addr: %p\n", &letter);

    printf("double val: %f\n", dd);
    printf("double addr: %p\n", &dd);


    int *p1;
    char *p2;
    double *p3;

    p1 = &number;
    p2 = &letter;
    p3 = &dd;

    printf("The memory address of p1: %p\n", &p1);
    printf("The memory address of p2: %p\n", &p2);
    printf("The memory address of p3: %p\n", &p3);

    printf("The memory address that p1 keeps: %p\n", p1);
    printf("The memory address that p2 keeps: %p\n", p2);
    printf("The memory address that p3 keeps: %p\n", p3);

    printf("The value of memory address that p1 keeps: %d\n", *p1);
    printf("The value of memory address that p2 keeps: %c\n", *p2);
    printf("The value of memory address that p3 keeps: %f\n", *p3);

    int b = 7;

    *p1 = b;

    printf("The memory address that p1 keeps: %p\n", p1);
    printf("The value of memory address that p1 keeps: %d\n", *p1);
    printf("int val: %d\n", number);

    // confusing but it is okey for variable init step!
    int *p4 = &b;
    printf("The memory address that p4 keeps: %p\n", p4);
    printf("The value of memory address that p4 keeps: %d\n", *p4);
    printf("int val: %d\n", b);

    return 0;
}