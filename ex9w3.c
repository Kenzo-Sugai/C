#include <stdio.h>

int main(){
    
    double angulo, pi, grau;
    printf("Digite o angulo em radianos:\n");
    scanf("%lf", &angulo);
    
    pi = 3.1415926535;
    grau = angulo*180/pi;

    printf("O angulo de %.6lf radianos equivale a %.6lf graus.", angulo, grau);

    return 0;

}