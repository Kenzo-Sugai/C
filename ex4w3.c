#include <math.h>
#include <stdio.h>

int digito_em (int n, int indice) {
    int i = 0;
    while(n != 0){
        i = i*10;
        i = i + n%10;
        n = n/10;
    }
    printf("%d", i);

}

int main(){

    int n, indice;

    scanf("%d", &n);
    scanf("%d", &indice);
    digito_em(n, indice);

    return 0;
}

