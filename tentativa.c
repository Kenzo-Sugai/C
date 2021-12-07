#include <stdio.h>

int main(){

    int n;
    int x = 1 + (rand() % 10);
    printf("%d", x);

    while(1){

        printf("Digite um número entre 1 e 10:\n");
        scanf("%d", &n);
        
        if(n > x){
            printf("Número alto!\n");
        }
        if(n == x){
            printf("Número certo!\n");
            break;
        }
        if(n < x){
            printf("Número baixo!\n");
        }
    }

}