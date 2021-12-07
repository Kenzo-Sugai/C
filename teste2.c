#include <stdio.h>


int main(){
    
    int notas;
    int resto;
    int notas100;
    int notas50;
    int notas20;
    int notas10;
    int notas5;
    int notas2;
    int notas1;

    scanf("%d", &notas);

    notas100 = notas/100;
    resto = notas % 100;
    notas50 = resto/50;
    resto = resto % 50;
    notas20 = resto/20;
    resto = resto % 20;
    notas10 = resto/10;
    resto - resto % 10;
    notas5 = resto/5;
    resto = resto % 5;
    notas2 = resto/2;
    resto = resto % 2;
    notas1 = resto;

    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);
}
