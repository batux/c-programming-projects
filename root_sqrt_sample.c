#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    double delta;

    printf("a: \n");
    scanf("%lf", &a);

    printf("b: \n");
    scanf("%lf", &b);

    printf("c: \n");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("Kökler bulunamadı!\n");
    }
    else
    {
        double x1, x2;
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1: %lf, x2: %lf \n", x1, x2);
    }
    return 0;
}