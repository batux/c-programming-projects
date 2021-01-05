#include <stdio.h>

int main()
{
    printf("a-b-c-d-e karakterlerinden birini giriniz: \n");
    char c = getchar();

    if (c == 'a') 
    {
        printf("Ali\n");
    }
    else if(c == 'b')
    {
        printf("Burhan\n");
    }
    else if(c == 'c')
    {
        printf("Cemal\n");
    }
    else if(c == 'd')
    {
        printf("Demir\n");
    }
    else if(c == 'e')
    {
        printf("Ertan\n");
    }
    else
    {
        printf("Hiçbiri\n");
    }

    return 0;
}