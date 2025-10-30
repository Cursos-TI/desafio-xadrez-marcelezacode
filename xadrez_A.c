# include <stdio.h>

int main() { 
    int i;

printf("=== Desafio de Movimento no Xadrez ===\n\n");

//------------ Torre ------------
printf("Movimento da Torre (for): \n");
    for (i = 1; i <= 5; i ++) {
printf ("direita\n");        
    }
printf("\n");

//------------ Bispo ------------
printf("Movimento do Bispo (while): \n");
    int passo = 1;
    while (passo <= 5) {
printf("cima\n");
printf("direita\n");
    passo ++;        
    }
printf("\n");

//------------ Rainha ------------
printf("Movimento da Rainha (do-while): \n");
    int j = 1;
    do {
printf("esqueda\n");
    j ++;         
    } while (j <= 8);
printf("\n");
    
//------------ Cavalo ------------
printf("Movimento do Cavalo (for + while): \n");
    int movimentosBaixo = 2; //duas casas para baixo
    int movimentosEsquerda = 1; //uma casa para esquerda
    for (i = 0; i < movimentosBaixo; i ++) {
printf("baixo\n");        
    }
    int k = 0;
    while(k < movimentosEsquerda) {
printf("esquerda\n");
    k ++;        
    } 
printf("\n=== Fim do Desafio - Aventureiro ===\n");

    return 0;
}