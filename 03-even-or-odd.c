#include <stdio.h>

void main() {
    
    int number;

    printf("Enter number to be evaluated: ");
    scanf(" %d", &number);

    if( number % 2 == 0 ) {
        printf("%d is even integer.\n", number);
    }
    else {
        printf("%d is odd integer.\n", number);
    }
}
