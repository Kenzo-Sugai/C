#include <stdio.h>

int main(){

    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday Today = Monday;

    switch(Today){

        case Sunday:
        printf("Today is Sunday");
        break;

        case Monday:
        printf("Today is Monday");
        break;

        case Tuesday:
        printf("Today is Tuesday");
        break;

        default:
        printf("Whatever");
        break;
    }   

    return 0;
}