#include <stdio.h>

int main () {
    int i;
printf("=== Desafio Movimento no Xadrez ===\n");

//------------ Torre -----------
printf("Movimento da Torre (for): \n");
    for (i =1; i <= 5; i ++){
printf("passo %d: direita \n", i);        
    }
printf("\n");

//------------ Bispo ------------
printf("Movimento do Bispo (while): \n");
    int passo = 1;
    while (passo <= 5) {
printf("passo %d; cima + direita\n", passo);
    passo ++;        
    }
printf("\n");

//------------ Rainha ------------
printf("Movimento da Rainha (do-while): \n");
    int j = 1;
    do {
printf("passo %d; esquerda\n", j);
    j ++;        
    } while (j <= 8);
printf("\n=== Fim do Desafio-Novato ===\n");

return 0;

}