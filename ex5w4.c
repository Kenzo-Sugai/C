#include <stdio.h>

#define M_PI  3.14159265358979323846  /* pi */

void graus(double rad){
    double graus = (rad*180)/(M_PI);
    printf("O angulo de %.6lf radianos equivale a %.4lf graus.", rad, graus);
}

int main(){
    
    double radianos;
    printf("Digite o angulo em radianos:\n");
    scanf("%lf", &radianos);
    graus(radianos);
}