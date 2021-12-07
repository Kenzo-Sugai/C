#include <stdio.h>
#include <math.h>

int modulo(int n, double *x){
    double soma, multi;
    for(int i = 0; i < n; i++){
        multi = x[i];
        multi = multi*multi;
        soma = soma + multi;
    }
    soma = sqrt(soma);
    printf("Modulo = %.2lf", soma);
    return 0;
}

int main(){
    
    int n;
    scanf("%d", &n);
    double x[n];
    
    for(int i = 0; i < n; i++){
        scanf("%lf", &x[i]);
    }

    modulo(n, x);
    return 0;
}