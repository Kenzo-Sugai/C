#include <stdio.h>

int somar(int, int);

int main(){

    int n1, n2;

    int somar(int num1, int num2){
        int result = num1 + num2;
        printf("Soma: %d", result);    
    }
    printf("digite dois números para soma-los: ");
    scanf("%d\n", n1);
    scanf("%d\n", n2);
    somar(n1, n2);

}