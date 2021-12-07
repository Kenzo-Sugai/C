#include <stdio.h>

void distanciamaior(int n, double *x){
    double maior = 0, menor = 100000000000000;
    for(int i = 0; i < n; i++){
        if(x[i] > maior){
            maior = x[i];
        }
        if(x[i] < menor){
            menor = x[i];
        }
    }

    double total = maior - menor;

    printf("Maior Distancia: %.2lf", total);
}

void distanciamenor(int n, double *x){
    double menor = 1000000000000;
    for(int i = 0; i < n; i++){
        double sub1, sub2;
        for(int j = 0; j < n; j++){
            sub1 = x[i]-x[n-j];
            sub2 = x[n-j]-x[i];
            if(sub1 < menor && sub1 > 0){
                menor = sub1;
            }
            if(sub2 < menor && sub2 > 0){
                menor = sub2;
            }
        }
    }
    printf("Menor Distancia: %.2lf\n", menor);
}

int main(){
    int n;
    scanf("%d", &n);
    double x[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &x[i]);
    }
    
    distanciamenor(n, x);
    distanciamaior(n, x);
}