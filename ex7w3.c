#include <stdio.h>
#include <math.h>

int dist2(int xd1, int xd2, int yd1, int yd2){
        int distx = (xd2-xd1)*(xd2-xd1);
        int disty = (yd2-yd1)*(yd2-yd1);
        float dist = sqrt(distx+disty);
        printf("Distancia entre os dois pontos: %f", dist);
        return 0;
    }

int main(){
    
    int x1, x2, y1, y2;

    printf("Digite as coordenadas do 1o. ponto:\n");
    scanf("%d%d", &x1, &y1);
    printf("Digite as coordenadas do 2o. ponto:\n");
    scanf("%d%d", &x2, &y2);

    dist2(x1, x2, y1, y2);

    return 0;
}