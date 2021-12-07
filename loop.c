# include <stdio.h>

int main(){
    // for(starting_codition; continuation_codition; action_per_iteration){loop}

    unsigned long long sum = 0LL; // Stores the sum of the integers
    unsigned int count = 0; // The number of integers to be summed

    // Read the number of integers to be summed
    printf("\nEnter the number of integers you want sum: ");
    scanf(" %u", &count);

    // Sum integers from 1 to count
    unsigned int i;
    for(i = 1 ; i <= count ; ++i){
        printf("insede loop");
        sum += i;
    }

    int countwhile = 0;

    // Sum integers from 1 to count
    while( countwhile <= 5){
        printf("%i\n", count);
        ++countwhile;
    }

    int number = 4;
    do{
        printf("\nNumber = %d", number);
        number++;
    }
    while(number < 4);

    printf("\nTotal of the first %u numbers is %llu\n", count, sum);

    return 0;    
}
