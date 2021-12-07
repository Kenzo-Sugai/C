#include <math.h>
#include <stdio.h>
float maiorRaiz(float a, float b, float c) {
    float t, raiz1, raiz2, delta;
    delta = (b*b - 4*a*c);
    if(delta < 0){
        return 0;
    }
    delta = sqrt(delta);
    raiz1 = (b*-1+delta)/2*a;
    raiz2 = (b*-1-delta)/2*a;
    if(delta < 0){
        return 0;
    }
    else if(raiz1>raiz2){
        t = raiz1;
    }
    else{
        t = raiz2;
    }
    return t;
}

#include <stdio.h>
#include <math.h>
float maiorRaiz (float a, float b, float c){
    float raiz1, raiz2, delta, t;
    delta=(b*b - 4*a*c);
    if(delta<0){
        return 0;    
    }
    delta = sqrt(delta);
    raiz1 = (b*-1+delta)/2*a;
    raiz2 = (b*-1-delta)/2*a;
    if (delta<0){
        return 0;
    }
    else if(raiz1>raiz2){
        t = raiz1;
    }
    else{
        t = raiz2;
    }
    return t;
}