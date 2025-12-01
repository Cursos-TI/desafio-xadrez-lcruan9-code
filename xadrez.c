#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
int main() {
    printf("#######################\nJogo de xadres iniciado \n#######################\n");
    printf("\n Movimentacao da Torre \n \n"); 
    int casas;
    printf ("Digite quantas casas a torre vai se mover:");
    scanf("%d", &casas);
        for (int i = 1; i <= casas ; i++)
    {
        printf(" Direita \n");
    };

    printf ("Digite quantas casas a Rainha vai se mover:");
    scanf("%d", &casas);

    printf("\n Movimentacao da Rainha \n \n"); 

        for (int i = 1; i <= casas ; i++)
    {
        printf(" Esquerda \n");
    }
    printf ("Digite quantas casas o bispo vai se mover:");
    scanf("%d", &casas);

    printf("\n Movimentacao do bispo \n \n"); 

        for (int i = 1; i <= casas ; i++)
    {
        printf(" Direita, cima \n");
    }






    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
