#include <stdio.h>

void backslash_sample()
{
    char ch = '\'';
    printf("%c\n", ch);
    printf("Turkiye'nin baskenti Ankara'dir\n");
    printf("Turkiye\'nin baskenti Ankara\'dir\n");

    char sample1 = '\"';
    char sample2 = '"';
    printf("%c, %c \n", sample1, sample2);

    printf(" \" Ankara güzel Ankara \" \n \r");
}

void octal_text()
{
    char ch = '\11';
    printf("Ankara %c Izmir\n", ch);
}

void hexadecimal_text()
{
    char hex_ch = '\x67'; // g
    printf("Ankara\x9\67Izmir\n");
    printf("%c \n", hex_ch);
}

int main()
{
    backslash_sample();
    octal_text();
    hexadecimal_text();
    return 0;
}