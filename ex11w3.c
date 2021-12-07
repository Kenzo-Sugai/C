#include <stdio.h>

int main(){

    int numero;
    scanf("%d", &numero);

    if(numero == 2 || numero == 3 || numero == 5 || numero == 7 || numero == 11 || numero == 13 || numero == 17){
        printf("primo");
    }
    else if(numero % 2 == 0 || numero % 3 == 0 || numero % 5 == 0 || numero % 7 == 0 || numero % 11 == 0 || numero % 13 == 0 || numero % 17 == 0){
        printf("composto");
    }
}