#include <stdio.h>
#include <ctype.h>
//#include <curses.h> 

int main()
{   
    char ch = ' ';

    // UNix/Linux sistemlerde getchar fonksiyonu curses.h kütüphanesinde yer alır.
    // Bu kodu Compile ederken kütüphaneyi vermek lazım!
    //while ( (ch = (char)getchar()) != 'q' )
    while ( ch != 'q' )
    {
        //printf("%c\n",ch);

        scanf("%c", &ch);
        ch = toupper(ch);
        ch = tolower(ch);

        if(isupper(ch))
        {
            printf("Büyük harf!\n");
        }
        else if(islower(ch))
        {
            printf("Küçük harf!\n");
        }
        else if(isdigit(ch))
        {
            printf("Digit harf!\n");

            if(isnumber(ch))
            {
                printf("Sayı harf!\n");
            }
        }
        else if(ispunct(ch))
        {
            printf("Noktalama harf!\n");
        }
    }

    return 0;
}