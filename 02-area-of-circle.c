#include <stdio.h>
#include <math.h>

void main() {

    float radius, area;
    
    printf("Enter radius of the circle: ");
    scanf(" %f", &radius);
    
    area = M_PI * radius * radius;

    printf("The area of circle with radius %f is %f", radius, area);
}
