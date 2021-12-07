#include <stdio.h>

int main()
{

    int A = 10;
    int B = 20;
    int result = 0;
    int soma = 0;
    int relation = 0;
    _Bool C = 1;            
    _Bool D = 0;
    _Bool logic = 0;

    result = A + B; /* A - B; A / B; A * B; ++A; --B; A % B = 0; */
    logic = C && D; /* && = AND; || = OR; ! = NOT; */
    soma += 1; /* A += 1 (A = A + 1); A -= 1 (A = A - 1); A *= 1 (A = A * 1); A /= 1 (A = A / 1); A %= 1 (A = A % 1); 
                  A <<= 1 (A = A << 1); A >>= 1 (A = A >> 1); A &= 1 (A = A & 1); A ^= 1 (A = A ^ 1); A |= 1 (A = A | 1);
                */
    relation == A; /* A == B (True); A != B (false); A > B (A Maior); A < B (B Maior); A >= B (A Maior ou igual);
                      A <= B (A Menor ou igual) */
    

    printf("C vale: %d\n", result);
    printf("logic vale: %d\n", logic);
    printf("soma vale: %d\n", soma);
    printf("relation vale: %d\n", relation);
    return 0;
}