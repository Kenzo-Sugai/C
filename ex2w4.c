#include <stdio.h>

void inverter(int lim, int *vet){
    
    for(int n = lim-1; n >= 0; n--){
        printf("%2d", vet[n]);
    }
}

int main(){
    int lim;
    scanf("%d", &lim);
    int vet[lim];

    for(int n = 0; n < lim; n++){
        scanf("%d", &vet[n]);
    }
    
    inverter(lim, vet);
    
    return 0;
}