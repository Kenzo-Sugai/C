#include <stdio.h>
#include <math.h>

void distmaior(int n, double *x, double *y){
    double maior = 0, menor = 1000000000000;
    for(int i = 0; i < n; i++){
        if(x[i] > maior){
            maior = x[i];
        }
        if(y[i] > maior){
            maior = y[i];
        }
        if(x[i] < menor){
            menor = x[i];
        }
        if(y[i] < menor){
            menor = y[i];
        }
    }

    double total = maior - menor;
    printf("Maior Distancia: %.2lf\n", total);
}

void distmenor(int n, double *x, double *y){
    double menor = 10000000000;
    for(int i = 0; i < n; i++){
        double sub;
        for(int j = 0; j < n; j++){
            sub = x[i]-y[j];
            if(sub < menor && sub > 0){
                menor = sub;
            }
        }
    }
    for(int i = 0; i < n; i++){
        double sub;
        for(int j = 0; j < n; j++){
            sub = y[i]-x[j];
            if(sub < menor && sub > 0){
                menor = sub;
            }
        }
    }
    printf("Menor Distancia: %.2lf\n", menor);
}

int main(){
    int n;
    scanf("%d", &n);
    double x[n];
    double y[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &x[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%lf", &y[i]);
    }
    distmenor(n, x, y);
    distmaior(n, x, y);
}