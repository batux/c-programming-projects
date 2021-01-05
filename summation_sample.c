#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Birinci sayiyi giriniz: \n");
    scanf("%d", &a);

    printf("İkinci sayiyi giriniz: \n");
    scanf("%d", &b);

    c = a + b;
    printf("Toplam: %d\n", c);

    return 0;
}