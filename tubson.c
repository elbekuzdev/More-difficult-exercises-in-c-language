#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    system("cls");

    int son, i = 1, countr = 0, sana = 1, nimadir = 1;

    printf("Son kiriting, men shu raqamdagi tub sonni chiqarib beraman: ");
    scanf("%d", &son);

    while (son >= sana)
    {

        // tubligini aniqlaydi
        while (nimadir >= i)
        {
            if (nimadir % i == 0)
            {
                countr++;
            }
            i++;
        }
        if (countr == 2)
        {
            sana++;
        }
        // tubligini aniqlovchi soha

        nimadir++;
        i = 1;
        countr = 0;
    }
    printf("%d", nimadir - 1);

    return 0;
}
