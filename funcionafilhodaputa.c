#include <stdio.h>

int sub(int, int);

int main(){

    int a = 3;
    int b = 4;
    int res = sub(a, b);
    
    return 0;

}

int sub(num1, num2){
    int result;
    result = num1-num2;
    printf("%d", result);
}