#include <stdio.h>

void media(int lim, double *vet){
    double soma;
    for(int n = 0; n < lim; n++){
        soma = vet[n] + soma;
    }
    
    double media = soma/lim;
    
    printf("%2lf", media);
}

int main(){
    
    int lim;
    scanf("%d", &lim);
    double vet[lim];
    
    for(int n = 0; n < lim; n++){
        scanf("%lf", &vet[n]);
    }
    
    media(lim, vet);
}