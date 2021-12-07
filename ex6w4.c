/* Leia dois vetores x e y com componentes do tipo double e de tamanho  n=2 ou n=3. 

Utilize funções para determinar o ângulo θ, em graus, entre os vetores  x e  y , sabendo que:.

cosθ=x⋅y|x||y|

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 4 casas após o ponto decimal. */

#include <stdio.h>
#include <math.h>

void angulo(int n, double *x, double *y){
    double multx, multxT, multy, multyT, multxy, multxyT, grau, arc, rad;

    #define M_PI  3.14159265358979323846  /* pi */

    for(int i = 0; i < n; i++){
        multx = x[i]*x[i];
        multxT = multxT + multx;
    }
    multxT = sqrt(multxT);
    for(int i = 0; i < n; i++){
        multy = y[i]*y[i];
        multyT = multyT + multy;
    }
    multyT = sqrt(multyT);
    for(int i = 0; i < n; i++){
        multxy = x[i]*y[i];
        multxyT = multxyT + multxy;
    }
    grau = multxyT/(multxT*multyT);
    arc = acos(grau);
    rad = (arc*180)/M_PI;

    printf("Angulo entre os vetores: %.4lf graus.", rad);
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

    angulo(n, x, y);
}