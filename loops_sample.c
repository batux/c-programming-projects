#include <stdio.h>
//#include <ncurses.h> 
#include <curses.h>
#include <math.h>

char a;

void whileLoop()
{
    int i = 0;

    while( i++ < 10)
    {
        printf("%d \n", i);
    }
    printf("--------------------\n");

    i = 0;
    while( ++i < 10)
    {
        printf("%d \n", i);
    }
    printf("--------------------\n");

    i=0;
    do {
       printf("%d \n", i); 
    } while(++i < 10);
    printf("--------------------\n");

    i=0;
    do {
       printf("%d \n", i); 
    } while(i++ < 10);
}

void getCharLoop()
{
    char ch;

    while( (ch = getchar()) != 'q')
    {}
}

void forLoop()
{
    for(double d = 0; d < 6.28; d = d + 0.1)
    {
        printf("sin(%.3f)=%.3f, cos(%.3f)=%.3f, tan(%.3f)=%.3f \n", d, sin(d), d, cos(d), d, tan(d));
    }

    int i = 0;
    for( printf("Part-1\n"); i < 3;  printf("Part-3\n") )
    {
        i++;
    }
}

int main()
{
    whileLoop();
    forLoop();
    getCharLoop();

    return 0;
}