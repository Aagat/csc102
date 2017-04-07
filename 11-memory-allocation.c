#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char firstName[20];
    char lastName[20];
    char address[100];
    int class;
    int rollNo;
    int age;
}Student;

void main() {

    int n;

    printf("Enter number of students you want to enter records for: ");
    scanf("%d", &n);
    
    Student* students = malloc( sizeof(*students) * n );

    for(int x=0; x < n; x++){

        printf("\nStudent Number %d\n", x+1);

        printf("First Name: ");
        scanf(" %s", &students[x].firstName);

        printf("Last Name: ");
        scanf(" %s", &students[x].lastName);

        printf("Address: ");
        scanf(" %s", &students[x].address);

        printf("Class: ");
        scanf(" %d", &students[x].class);

        printf("Roll Number: ");
        scanf(" %d", &students[x].rollNo);

        printf("Age: ");
        scanf(" %d", &students[x].age);
    }

    printf("\n---------- Output ----------\n");
    for(int i=0; i < n; i++) {
        printf("First Name: %s\n", students[i].firstName);
        printf("Last Name: %s\n", students[i].lastName);
        printf("Address: %s\n", students[i].address);
        printf("Class: %d\n", students[i].class);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }
}
