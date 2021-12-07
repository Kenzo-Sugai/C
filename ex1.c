# include <stdio.h>
# include <stdlib.h>

int x3(x1, x2){
    int *qnt = x1 + x2;
    return qnt;
}

int main(){
    int *n1 = {1, 3, 5, 6, 7};
    int *n2 = {1, 3, 4, 6, 8};

    n1, n2 = malloc(sizeof(n1)*sizeof(int));

    int n3 = x3(n1, n2);

    printf("%i", n3);
}