#include <stdio.h>

int max(int, int, int);

int main(){

    int a, b, c, result;

    printf("Digite 3 argumentos\n");
    scanf("%d%d%d", a,b,c);

    result = max(a,b,c);

    return 0;
}

int max(n1, n2, n3){
    if(n1 > n2 && n2 > n3){
        printf("O maior valor é %d", n1);
    }
    else if(n1 > n3 && n3 > n2){
        printf("O maior valor é %d", n1);
    }
    else if(n2 > n1 && n1 > n3){
        printf("O maior valor é %d", n2);
    }
    else if(n2 > n3 && n3 > n2){
        printf("O maior valor é %d", n2);
    }
    else if(n3 > n1 && n1 > n2){
        printf("O maior valor é %d", n3);
    }
    else if(n3 > n2 && n2 > n1){
        printf("O maior valor é %d", n3);
    }
}

