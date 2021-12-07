#include <stdio.h>

void search(int n, int *x){
    int k, c;
    scanf("%d", &k);
    for(int i = 0; i < n; i++){
        if(k == x[i]){
            c = i;
            break;
        }
        else{
            c = -1;
        }
    }
    printf("Busca: %d", c);
}

int main(){

    int n;
    scanf("%d", &n);
    int x[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    search(n, x);
}