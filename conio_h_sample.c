#include <stdio.h>
#include <ncurses.h>  // #include <conio.h> yerine artık bu header file varmış!

// ek kütüphaneler ile compile etmek için gcc'ye -lncurses parametresiyle ilgili kütüphane verilmelidir.

// gcc -o conio_h_sample conio_h_sample.c -lncurses

int main()
{
    /*
    printf("press key!\n");
    char ch = getchar();
    printf("ok! %c\n", ch);
    */

    char ch;
    while( (ch = getchar()) != 'q')
    {
        //putchar(ch);
    }

    return 0;
}