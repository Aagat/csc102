#include <stdio.h>

void main() {
    for(int number =1; number<=100; number++){
        int isPrime = 1;
        for(int j=2; j<number; j++){
            if(number % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1 && number != 1) {
            printf("%d\t", number);
        }
    }
}
