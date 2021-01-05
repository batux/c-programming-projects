#include <stdio.h>

void hex_numbers()
{

    int a = 0x45; // 0x ile başlıyorsa hexadecimal format
    int b = 0x4554;

    printf("%d\n", a);
    printf("%d\n", b);
}

void octal_numbers()
{
    int a = 0114; // 0 ile başlıyorsa octal format
    printf("%d \n", a);
}

int main()
{
    hex_numbers();
    octal_numbers();
    return 0;
}