#include <stdio.h>

int main(){

    int m = 0;

    printf("Digite o número de minutos para serem convertidos: ");
    scanf("%d", m);


    float h = m / 60;
    float d = h / 24;

    printf("%d|%d|%d\n", d, h, m);

    return 0;

}