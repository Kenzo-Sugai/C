# include <stdio.h>
# include <stdlib.h>

int main(){
    int tam, valor;
    int *v;

    printf("Digite quantas posições seu vetor terá \n");
    scanf("%d", &tam);
    v = malloc(tam*sizeof(int));
    for(int i = 0; i < tam; i++){
        printf("Insira o valor da posição %d do vetor \n", i);
        scanf("%d", v+i);
    }
    printf("Seu vetor foi preenchido! \n");
    for(int i = 0; i < tam; i ++){
        printf("v[%d] = %d \n", i, *(v+i));
    }
}