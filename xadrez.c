#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // nome do desafio
    printf("DESAFIO MOVIMENTAÇÃO DE PEÇAS DE XADREZ!\n");
    printf("\n");
    //primeira peça TORRE
    printf("MOVIMENTO TORRE( 5 CASAS PARA A DIREITA):\n");

    int casa_torre = 0; //casa inicial da torre
    int movimento_torre = 0;

    while (movimento_torre < 5) {
        casa_torre++;// move uma casa para a direita
        movimento_torre++;
        printf("CASA %d: ( %d, y)\n", movimento_torre, casa_torre);
    }
    
    printf("\n");

    // segunda peça RAINHA
    printf("MOVIMENTO RAINHA( 8 CASAS PARA A ESQUERDA): \n");

    int casa_rainha = 8;//casa inicial da rainha
    int movimento_rainha = 0;
    

    do {
        casa_rainha--; // MOVE UMA CASA PARA A ESQUERDA
        movimento_rainha++;
        printf("CASA  %d: ( %d, y)\n", movimento_rainha, casa_rainha);
        
         } while(movimento_rainha < 8);
               printf("\n");

    //terceira peça BISPO
    printf("MOVIMENTO BISPO( 5 CASAS NA DIAGONAL PARA CIMA Á DIREITA): \n");

    int casa_bispo = 1;//casa inicial na horizontal
    int movimento_bispo = 1;//casa inicial na vertical

    
     for(int i = 0; i < 5; i++) {
        casa_bispo++;
        movimento_bispo++;
        printf("CASA %d: ( %d, %d)\n", i + 1, casa_bispo, movimento_bispo);
    }

    
    
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



