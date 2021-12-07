#include <stdio.h>

int main() {

    char str[100];
    int i;

    printf("Entre com um valor :");

    scanf("%d %s", &i, str);

    printf("\nVocê entrou com o valor: %d::::::::::%s\n", i, str);

    return 0;
}