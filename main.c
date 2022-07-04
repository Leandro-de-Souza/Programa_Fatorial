#include <stdio.h>


int main()
{

    int N, i, fatorial;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    fatorial = 1;

    for (i = N; i > 0; i--) {
         fatorial = fatorial * i;
    }

    printf("FATORIAL = %d", fatorial);


    return 0;
}
