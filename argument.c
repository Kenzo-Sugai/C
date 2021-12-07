#include <stdio.h>

int main(int argc, char *argv[])
{
    int argumentos = argc;
    char *argumento1 = argv[0];
    char *argumento2 = argv[1];

    printf("Numero de argumentos: %d\n", argumentos);
    printf("O primeiro argumento é o nome do programa: %s\n", argumento1);
    printf("O segundo argumento é a linha do comando do argumento: %s\n", argumento2);

    return 0;

}