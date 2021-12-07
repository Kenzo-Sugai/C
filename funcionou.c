#include <stdio.h>

int anobissexto(int);

int main(){

    int ano;
    int res;

    printf("Digite o ano de sua escolha:\n");
    scanf("%d", &ano);
    res = anobissexto(ano);

    return 0;
}

int anobissexto(anob){
    if(anob % 400 == 0){
        printf("Sim");
    }
    else if(anob % 4 == 0 && anob % 100 != 0){
        printf("Sim");
    }
    else{
        printf("Não");
    }
}