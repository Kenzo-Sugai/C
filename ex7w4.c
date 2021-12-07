#include <stdio.h>

void produto(double *x, double *y){
    double prod1, prod2, prod3;
    prod1 = ((x[1]*y[2])-(x[2]*y[1]));
    prod2 = ((x[2]*y[0])-(x[0]*y[2]));
    prod3 = ((x[0]*y[1])-(x[1]*y[0]));
    printf("Produto Vetorial = (%.2lf, %.2lf, %.2lf)", prod1, prod2, prod3);
}

int main(){
    double x[3];
    double y[3];

    for(int i = 0; i < 3; i++){
        scanf("%lf", &x[i]);
    }
    for(int i = 0; i < 3; i++){
        scanf("%lf", &y[i]);
    }
    produto(x, y);

}