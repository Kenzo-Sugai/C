# include <stdio.h>

int main() {

    int i = 1;
    int n;
    int j = 0;
    float media;

    while(i <= 4) {

        printf("Digite o valor da nota %d\n", i);
        scanf("%d", &n);
        j = j + n;
        i++;
    }

    media = j/4;

    printf("A media do aluno é: %.2f", media, j);
}