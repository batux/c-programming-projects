#include <stdio.h>

void sayHello()
{
    printf("Merhaba dunya!\n");
}

void hexadecimalOperations()
{
    int hexadecimal_sayi = 0;

    printf("Hexadecimal formatta sayi giriniz: \n");
    scanf("%x", &hexadecimal_sayi);

    printf("10'luk tabanda: %d\n", hexadecimal_sayi);
}

void decimalOperations()
{
    int sayi = 0;

    printf("Bir sayi giriniz: \n");
    scanf("%d", &sayi);

    printf("Sayi: %d \n", sayi);
}

void doubleFloatOperations()
{
    float f;
    double d;

    printf("float bir deger giriniz:\n");
    scanf("%f", &f);

    printf("double bir deger giriniz:\n");
    scanf("%lf", &d);

    printf("float: %f, double: %lf \n", f, d);
}

// C'de global değişkenlerin ilk değeri olmasa da 0 değerini alırlar. 
int b;

int main()
{
    // C'de local değişkenlerin ilk değeri olmazsa rastgele bir değer alırlar.
    int a;

    sayHello();

    // 10'luk formatta yazdırır.
    printf("b: %d \n", b);
    printf("a: %d \n", a);

    // hexadecimal formatta yazdırır.
    printf("b: %x \n", b);
    printf("a: %x \n", a);

    decimalOperations();

    // hexadecimal formatta sayi girişi için
    hexadecimalOperations();

    // double ve float işlemler
    doubleFloatOperations();
    
    return 0;
}