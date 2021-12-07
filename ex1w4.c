#include <stdio.h>

void maior(int lim, double *Taxas){
    int maior = 0;
    int indice = 0;
    for(int n = 0; n < lim; n++){
        if(Taxas[n] > maior){
            maior = Taxas[n];
            indice = n;
        }
    }
    printf("%d", maior);
}

int main(){
    
    int lim;
    scanf("%d", &lim);
    double Taxas[lim];
    
    for(int n = 0; n < lim; n++){
        
        scanf("%lf", &Taxas[n]);
        
    }
    
    maior(lim, Taxas);

}