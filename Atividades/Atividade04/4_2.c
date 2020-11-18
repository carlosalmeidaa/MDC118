#include <stdio.h>

int main()
{
    int x;

    printf("Digite o ano: ");
    scanf("%d",&x);

    if(x % 4 == 0)
    {
        if( x % 100 == 0)
        {
            if ( x % 400 == 0)
                printf("%d é bissexto", x);
            else
                printf("%d não é bissexto", x);
        }
        else
            printf("%d é bissexto", x);
    }
    else
        printf("%d não é bissexto", x);

    return 0;
}