#include <stdio.h>

void undefined_operations()
{

    int a = 3;
    // int b = (++a) + (++a); geçersiz ifade
    // b = ++b; geçersiz ifade
    // b = ++(a-2); geçersiz ifade
    // b = ++a--; geçersiz ifade
    printf("%d \n", a);
}

void control_operators()
{
    int a = 3;

    int b = (a > 1) + 1; // karşılaştırma operatörü 0 veya 1 üretir!
    printf("b: %d\n", b);

    int x = 10, y = 5;

    // C'de bu işlemez!
    // y = 5 < x < 20;
    // printf("y: %d\n", y);

    int sonuc1 = (1 && 5);
    int sonuc2 = (1 && 0);
    int sonuc3 = (1 || 0);

    printf( "sonuc1: %d\n", sonuc1);
    printf( "sonuc2: %d\n", sonuc2);
    printf( "sonuc3: %d\n", sonuc3);

    int res = ( x = 5, x + y );
    printf("Res: %d\n", res);
}

int foo()
{
    return 1;
}

int bar()
{
    return 2;
}

int tar()
{
    return 5;
}

int main()
{
    int a = 3;
    
    int b = 2 + ++a * 2;
    printf("a: %d, b: %d \n", a, b);

    int c = a++ * 2;
    printf("a: %d, b: %d \n", a, b);

    // undefined_operations();

    control_operators();

    int res = ( foo(), bar(), tar() );
    printf("result: %d\n", res);

    return 0;
}