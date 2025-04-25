#include <stdio.h>

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
     
     printf("***============================***\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
