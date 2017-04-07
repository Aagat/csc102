#include <stdio.h>

void main() {

    int n, swap;

    printf("Enter the number of integers you want to enter: ");
    scanf(" %d", &n);

    int numbers[n];
    
    for(int i=0; i < n; i++) {
        printf("Enter number %d\t", i+1);
        scanf(" %d", &numbers[i]);
    }

    // Sorting using bubble sort
    for(int j=0; j < n; j++) {
        for(int i=0; i < (n-1); i++) {
            if ( numbers[i] > numbers[i+1]) {
                swap = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = swap;
            }
        }
    }

    for(int i=0; i<n; i++) {
        printf("%d\n", numbers[i]);
    }
}
