#include <stdio.h>

void main() {

    int number, size, sum, smallest, largest;
    float average;

    printf("How many numbers would you like to input? ");
    scanf(" %d", &size);

    int numbers[size];
    
    for(int i = 1; i<=size; i++){
        printf("Enter number %d: ", i);
        scanf(" %d", &numbers[i-1]);
    }

    for(int i = 0; i < size; i++){
        sum = sum + numbers[i];
        /* If this number is smaller than the smallest number */
        if(numbers[i] < smallest){
            smallest = numbers[i];
        }
        
        /* If this number is larger than largest number */
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    average = (float) sum/size;

    printf("The average of the numbers is %f\n", average);
    printf("The smallest of the numbers is %d\n", smallest);
    printf("The largest of the numbers is %d\n", largest);

}
