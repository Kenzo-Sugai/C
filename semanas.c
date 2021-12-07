# include <stdio.h>

int main() {

    int n;

    printf("Digite um número entre 1 e 7\n");
    scanf("%d", &n);

    if(n == 1){
        printf("Domingo");
    }
    if(n == 2){
       printf("Segunda"); 
    }
    if(n == 3){
        printf("Terça");
    }
    if(n == 4){
        printf("Quarta");
    }
    if(n == 5){
        printf("Quinta");
    }
    if(n == 6){
        printf("Sexta");
    }
    if(n == 7){
        printf("Sábado");
    }

}