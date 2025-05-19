#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // nome do desafio
    printf("DESAFIO MOVIMENTAÇÃO DE PEÇAS DE XADREZ!\n");
    printf("\n");
    //primeira peça TORRE
    printf("MOVIMENTO TORRE\n");

    int casa=0; //casa inicial da torre
    int movimentos_peca=0;

    while (movimentos_peca<5) {
        casa++;// move uma casa para a direita
        movimentos_peca++;
        printf("TORRE NA CASA: %d\n", casa);
    }
    
    printf("\n");

    // segunda peça RAINHA
    printf("MOVIMENTO RAINHA\n");

    int casa_rainha=0;//casa inicial da rainha
    int movimento_rainha=0;
    

    do {
        printf("RAINHA NA CASA: %d\n", casa_rainha);
        casa_rainha++;//MOVE UMA CASA PARA A ESQUERDA
        movimento_rainha++;

    } while(movimento_rainha<8);

    
    
   return 0;
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



