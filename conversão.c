#include <stdio.h>

int main(){

int m = scanf("Digite o número de minutos para serem convertidos: ");


float h = m / 60;
float d = h / 24;

printf("%d|%d|%d", d,h,m);

return 0;

}