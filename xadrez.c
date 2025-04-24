#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para mover a Torre para a direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movBispo = 5;
    int movTorre = 5;
    int movRainha = 8;
    int movCavalo = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentacao do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) { // j < 1 apenas para manter a estrutura aninhada
            printf("Cima Direita\n");
        }
    }
    printf("---\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentacao da Torre:\n");
    moverTorre(5);
    printf("---\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentacao da Rainha:\n");
    moverRainha(8);
    printf("---\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentacao do Cavalo (L para cima e direita):\n");
    int cima = 0, direita = 0;
    while (1) {
        if (cima < 2) {
            printf("Cima\n");
            cima++;
            continue;
        }

        if (direita < 1) {
            printf("Direita\n");
            direita++;
        }

        // Quando o movimento completo for feito (2 cima + 1 direita), interrompe
        if (cima == 2 && direita == 1) {
            break;
        }
    }

    return 0;
}
