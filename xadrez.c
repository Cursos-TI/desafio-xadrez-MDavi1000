#include <stdio.h>

// Desafio de Xadrez - MateCheck
int bispo, torre, rainha;

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

    //==============================================================================================================
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
