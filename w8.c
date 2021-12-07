#include <stdio.h>
#include <stdlib.h>

void x3func(int x1[], int x2[], int n1, int n2){
  int maior = 0, menor = 1000000;
  for(int i = 0; i < n1; i++){
    if(*(x1+i) > maior){
      maior = *(x1+i);
    }
    if(*(x1+i) < menor){
      menor = *(x1+i);
    }
  }
  for(int i = 0; i < n2; i++){
    if(*(x2+i) > maior){
      maior = *(x2+i);
    }
    if(*(x2+i) < menor){
      menor = *(x2+i);
    }
  }

  int x3[maior], count = 0;
  for(int i = menor; i <= maior; i++){
    for(int j = menor; j <= maior; j++){
      if(j < n1){
        if(*(x1+j) == i){
        x3[count] = i;
        count++;
        break;
        }
      }
      if(j < n2){
        if(*(x2+j) == i){
        x3[count] = i;
        count++;
        break;
        }
      }
    }
  }
  int *qnt = &count;
  printf("qnt = %d\n", *qnt);
  for(int i = 0; i < count; i++){
    printf("x3[%d] = %d\n", i, x3[i]);
  }
}

int main(void){
  int n1, n2, *x1, *x2;
  scanf("%d", &n1);
  scanf("%d", &n2);
  x1 = malloc(n1*sizeof(int));
  x2 = malloc(n2*sizeof(int));
  for(int i = 0; i < n1; i++){
    scanf("%d", x1+i);
  }
  for(int i = 0; i <n2; i++){
    scanf("%d", x2+i);
  }
  x3func(x1, x2, n1, n2);
}