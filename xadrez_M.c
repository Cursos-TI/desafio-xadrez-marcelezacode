# include <stdio.h>

//-------------- Funções Recursivas --------------
//Torre -> 5 casas para a direita 
    void moverTorre (int casa) {
    if (casa == 0) return;
printf("direita\n");
    moverTorre (casa - 1);
    }

//Rainha -> 8 casas para a esquerda
    void moverRainha (int casa) {
    if (casa == 0) return;
printf ("direita\n");
    moverRainha (casa -1);        
    }

//Bispo -> diagonal (cima + direita), versao recursiva
    void moverBispoRecursivo (int casa) {
    if (casa == 0) return;
printf("cima\n");
printf("direita\n");
    moverBispoRecursivo(casa - 1);        
    }    
 //Bispo -> Versao com loops aninhados
    void moverBispoLoops (int casa) {
    for (int i = 0; i < casa; i ++) { 
        //movimento vertical
    for (int j = 0; j < 1; j ++) {
        //movimento horizontal (uma vez por iterção vertical)
    printf("cima\n");
    printf("direita\n");    
          }    
       }    
    } 
    
    //--------------- Cavalo (loops complexos) ---------------
        void moverCavalo (){
        int movimentosVertical = 2; //duas casas para cima
        int movimentosHorizontal = 1; //uma casa para direita
    printf("Movimento do Cavalo (loops Complexos);\n");
        for (int i = 0, j = 0; i < movimentosVertical || j < movimentosHorizontal;) {
        if (i < movimentosVertical) { 
    printf("cima\n");
        i ++;
        if (i == movimentosVertical && j == 0) continue;
    //forçar passar para horizontal depois            
        }    
        if ( j < movimentosHorizontal) {
    printf("direita\n");
        j ++;        
    }    
        if (i > - movimentosVertical && j > - movimentosHorizontal){
        break; // terminou 0 "L"    
           }
         }
    printf ("\n");             
        }
    //--------------- Main ---------------
    int main (){    
printf("=== Desafio de Movimento do Xadrez ===\n\n");

//--------------- Torre (recursivo) ---------------
printf("Movimento da Torre (recursividade):\n");
        moverTorre (5);
printf("\n");

//--------------- Bispo (recursivo) ---------------
printf("Movimento do Bispo (recursividade):\n");
        moverBispoRecursivo (5);
printf("\n");
//--------------- Bispo (loops aninhados) ---------------
printf("movimento do Bispo(loops aninhados ):\n");
    moverBispoLoops (5);
printf("\n");

//--------------- Rainha (recursivo) ---------------
printf("Movimento da Rinha(recursividade):\n");
        moverRainha (8);
printf("\n");

//--------------- Cavalo (loops complexo) ---------------
        moverCavalo();

printf("=== Fim do Desafio - Mestre ===\n");

return 0;

    }