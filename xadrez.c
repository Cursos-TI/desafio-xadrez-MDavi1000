/*#include <stdio.h>

// Desafio de Xadrez - MateCheck
int bispo, torre, rainha, cavalo_movimento_l;

int main() {
   printf("=== Nível Novato - Movimentação das Peças ===\n");

   printf("Movimentação do Bispo\n");
do
{
    printf ("Cima\n");
    printf("Direita\n");
    bispo++;
} while (bispo < 5);

printf("***============================***\n");
    
printf ("Movimentação da Torre\n");
for ( torre = 0; torre < 5 ; torre++)
{
    printf("Direita\n");
}
printf("***============================***\n");

printf ("Movimentação da Rainha\n");
while (rainha < 8)
{
    printf("Esquerda\n");
    ++rainha;
}
printf("***============================***\n");

    // Nível Aventureiro - Movimentação do Cavalo
    printf ("Movimentacao cavalo\n");
    
    cavalo_movimento_l = 1;

    while (cavalo_movimento_l < 2)
     {
        for (cavalo_movimento_l = 0; cavalo_movimento_l < 2 ; cavalo_movimento_l++)
        {
            printf ("Cima\n");
        }
        
        printf("Esquerda \n");
     }
     
     printf("***============================***\n");*/

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    #include <stdio.h>

// Recursiva Bispo:
void moverBispo(int casasB)
{
    if (casasB > 0)
    {
        printf("Direita \n");
        moverBispo(casasB - 1);
    }
}

// Recursiva Torre:
void movertorre(int casasT)
{
    if (casasT > 0)
    {
        printf("Direita \n");
        movertorre(casasT - 1);
    }
}

int main()
{
   //Torre Recursiva
    movertorre(5);

    printf("=======================\n");
   
    // Bispo Recursiva
    moverBispo(5);

    printf("=======================\n");

    // Rainha:

    int casasR;

    for (casasR = 0; casasR <= 7; casasR++) // Rainha 8 casa para Esquerda!
    {
        printf("Esquerda \n");
    }

    printf("=======================\n");

    // Cavalo;

    int cavaloCima, cavaloDireita;

    for (cavaloCima = 0, cavaloDireita = 0; cavaloCima <= 2 && cavaloDireita <= 1; cavaloCima++, cavaloDireita++)
    {
        printf("Cima\n");
    }
    printf("Direita\n");
    return 0;
}

