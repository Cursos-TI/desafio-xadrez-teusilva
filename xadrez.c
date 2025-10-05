#include <stdio.h>

#include <stdio.h>
// Move-se em linha reta: aqui simulamos 5 casas para a direita.
void moverTorre(int movimentos)
{
    if (movimentos > 0)
    {
        printf("Direita\n");
        moverTorre(movimentos - 1);
    }
}
// Move-se na diagonal: aqui simulamos 5 casas para "Cima Direita"
void moverBispo(int vertical, int horizontal, int maxCasas)
{
    if (vertical == maxCasas || horizontal == maxCasas)
        return;

    for (int v = vertical; v < maxCasas; v++)
    {
        for (int h = horizontal; h < maxCasas; h++)
        {
            printf("Cima Direita\n");
            moverBispo(v + 1, h + 1, maxCasas);
            return;
        }
    }
}
// Move-se em qualquer direção: aqui simulamos 8 casas para a esquerda.
void moverRainha(int movimentos)
{
    if (movimentos > 0)
    {
        printf("Esquerda\n");
        moverRainha(movimentos - 1);
    }
}

// Movimento do Cavalo com Loops complexos
// O cavalo se move em L.
void moverCavalo(int movimentos)
{
    int total = 0; // contador de movimentos realizados

    // Loops aninhados simulando o movimento em L
    for (int i = 1; i <= movimentos; i++)
    {
        for (int v = 1; v <= 2; v++)
        { // duas casas para cima
            for (int h = 1; h <= 1; h++)
            { // uma casa para direita
                printf("Cima, Cima, Direita\n");
                total++;
                if (total == movimentos)
                {
                    // encerra todos os loops se atingir o limite
                    break;
                }
            }
            if (total == movimentos)
                break;
        }
        if (total == movimentos)
            break;
    }

    printf("\n");
}

int main()
{
    printf("Movimento da Torre: \n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do Bispo: \n");
    moverBispo(0, 0, 5);
    printf("\n");

    printf("Movimento da Rainha \n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(1);

    return 0;
}