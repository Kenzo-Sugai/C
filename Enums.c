#include <stdio.h>

int main() {

    enum empresa;

    enum empresa {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum empresa google = GOOGLE;

    enum empresa xerox = XEROX;

    enum empresa ebay = EBAY;

    printf("O valor de XEROX é: %d\n", xerox);
    printf("O valor de GOOGLE é: %d\n", google);
    printf("O valor de EBAY é: %d\n", ebay);

    return 0;
}