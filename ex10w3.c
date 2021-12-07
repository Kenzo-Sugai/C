/* laborar um programa para exibir a média μ  de n números reais.

μ=∑ni=1xin

Utilize variável float

Exemplo

Entrada

4 1 2 3 4

Saída

Media = 2.500000

For example: */

#include <stdio.h>

int main(){

    double media;
    int n = 0;
    int soma = 0;
    int i = 1;

    for(int c = 1; c != 0; c++){
        scanf("%d", &n);
        soma = soma + n;
        media = soma/i;
        printf("%6lf %d\n", media, i);
        i += 1;
    }

    return 0;

}