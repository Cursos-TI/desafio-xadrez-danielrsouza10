#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movBispo = 5;
    int movTorre = 5;
    int movRainha = 8;
    int movCavalo = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 0; i < movBispo; i++) {
        printf("Cima Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre (5 casas para a direita):\n");
    int j = 0;
    while (j < movTorre) {
        printf("Direita\n");
        j++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movRainha);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação do Cavalo (em L - Baixo e Esquerda):\n");

    for (int i = 0; i < movCavalo; i++) {
        int passo = 0;

        // Primeiro: mover 2 casas para baixo
        while (passo < 2) {
            printf("Baixo\n");
            passo++;
        }

        // Depois: mover 1 casa para a esquerda
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
