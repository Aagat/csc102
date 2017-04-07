#include <stdio.h>
long int raise(int number, int power);

void main() {

    int number, power;
    
    printf("Enter number: ");
    scanf(" %d", &number);
    
    printf("Enter power: ");
    scanf(" %d", &power);
    
    printf("The result of %d raised to the power %d is %d\n", number, power, raise(number, power));
}

long int raise(int number, int power) {

    if(power >= 1)
        return number * raise(number, power - 1);

    else 
        return number;
    
}
