#include <stdio.h>

int scanVetor(int i){
    int v[i];
    printf("Digite os valores dentro do vetor:\n");
    for(int index = 0; index < i; index++){
        scanf("%d", &v[index]);
    }
    for(int index = 0; index < i; index++){
        printf("v[%d] = %d\n", index, v[index]);
    }
    return 0;
}

int main(){

    int limite;

    printf("Digite o limite do seu vetor:\n");
    scanf("%d", &limite);
    scanVetor(limite);
}