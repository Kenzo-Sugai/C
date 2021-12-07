# include <stdio.h>
# include <stdlib.h>

void vectorread(int n, int *v){
    for(int i = 0; i < n; i++){
        printf("V[%d] = %d\n", i, *(v+i));
    }
}

int main(){
    int n;
    int *v;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);
    v = malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Insira o valor da posição %d do vetor\n", i);
        scanf("%d", (v+i));
    }
    printf("Seu vetor foi preenchido!\n");
    vectorread(n, v);

}