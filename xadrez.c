#include <stdio.h>

int main()
{
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    printf("Movimento da torre: \n");
    for (int i = 1; i <= torre; i++)
    {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimento do bispo: \n");
    int i = 1;
    while (i <= bispo)
    {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }
    printf("\n");

    printf("Movimento da Rainha:\n");
    int j = 1;
    do
    {
        printf("Esquerda\n");
        j++;

    } while (j <= rainha);

    return 0;
}