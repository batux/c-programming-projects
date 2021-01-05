#include <stdio.h>
#include <math.h>

void mysqrt()
{
    double number = 0.0;
    double result = 0.0;

    printf("Karekökü alınacak sayı değerini giriniz: \n");
    scanf("%lf", &number);

    result = sqrt(number);
    printf("Result: %lf \n", result);
}

void mypow()
{
    double number1 = 0;
    double number2 = 0;

    printf("Number1: \n");
    scanf("%lf", &number1);

    printf("Number2: \n");
    scanf("%lf", &number2);

    double result = pow(number1, number2);

    printf("Total: %lf\n", result);
}

void sin_cos_tan()
{
    double result;

    result = sin(3.142342 / 6);
    printf("sin: %lf\n", result);

    result = cos(3.142342 / 2);
    printf("cos: %lf\n", result);

    result = tan(3.142342 / 4);
    printf("tan: %lf\n", result);
}

int main()
{
    mysqrt();
    mypow();
    sin_cos_tan();

    // int tipine tek tırnak arasında 4 karakter yazılabilir.
    int sample = 'fbsb';
    printf("%d \n", sample);

    printf("\a \a");

    return 0;
}