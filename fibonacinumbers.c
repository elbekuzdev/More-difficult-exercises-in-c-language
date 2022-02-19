#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int son;
    int son1;
    printf("Son kiritng, men shu raqamdagi fibonachi sonni chiqarib beraman: ");
    scanf("%d",&son);

    int boshi = 0;
    int oxiri = 1;

    if ( son == 1)
    printf("%d", boshi);
    else if (son == 2)
    printf("%d", oxiri);
    else 
    {
        for ( int i = 3 ; i <= son ; i++)
        {
            son1 = boshi;
            boshi = oxiri;
            oxiri = boshi + son1;
        }
        printf("%d", oxiri);
    }


}
