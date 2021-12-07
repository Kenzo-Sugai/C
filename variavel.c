#include <stdio.h>

int main() 
{
    int var1 = 100;
    float var2 = 100.234;
    double var3 = 8.33e+11;
    char var4 = 'W';

    _Bool var5 = 0;

    printf("var1 = %i\n", var1);
    printf("var2 = %.2f\n", var2);
    printf("var3 = %e\n", var3);
    printf("var4 = %g\n", var4);
    printf("var4 = %c\n", var4);

    printf("var5 = %i\n", var5);

    return 0;

}