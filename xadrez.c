#include <stdio.h>

int main() {

    int i=0;

    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++){
        printf("Direita\n");
    }
    printf("\n");

    i=0;
    printf("Movimento do Bispo:\n");
    while(i < 5){
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    i=0;
    printf("Movimento da Rainha:\n");
    do{
        printf("Esquerda\n");
        i++;
    } while(i < 8);
   

    return 0;
}
