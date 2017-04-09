#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char firstName[20];
    char lastName[20];
    char address[100];
    int class;
    int rollNo;
    int age;
}Student;

void main() {

    int n=0, count=1;
    char contd[2];
    FILE *dbw, *dbr;

    printf("Enter records for each students. Enter no when prompted to quit.\n\n");
    
    // Allocate space for zero structs by default
    Student* students = NULL;

    while( strcmp(contd,"no") != 0 ) {
        
        students = realloc(students, sizeof(Student) * count);

        printf("\nStudent Number %d\n", count);

        printf("First Name: ");
        scanf(" %s", &students[n].firstName);

        printf("Last Name: ");
        scanf(" %s", &students[n].lastName);

        printf("Address: ");
        scanf(" %s", &students[n].address);

        printf("Class: ");
        scanf(" %d", &students[n].class);

        printf("Roll Number: ");
        scanf(" %d", &students[n].rollNo);

        printf("Age: ");
        scanf(" %d", &students[n].age);

        count++; n++;
        printf("\nWould you like to continue? (Yes/No): ");
        scanf(" %s", contd);

    }

    // Save to file
    dbw = fopen("students.db", "a");
    for(int i=0; i < n; i++) {
        fprintf(dbw,"%s %s %s %d %d %d\n", students[i].firstName, students[i].lastName, students[i].address, students[i].class, students[i].rollNo, students[i].age);
    }
    fclose(dbw);

    // Read from file
    Student* fstudents = NULL;
    dbr = fopen("students.db", "r");

    int rc = 0;
    int c;

    while( (c = fgetc(dbr)) != EOF) {
        ungetc(c,dbr);
        fstudents = realloc(fstudents, sizeof(Student) * (rc+1));
        fscanf(dbr,"%s %s %s %d %d %d", &fstudents[rc].firstName, &fstudents[rc].lastName, &fstudents[rc].address, &fstudents[rc].class, &fstudents[rc].rollNo, &fstudents[rc].age);
        rc++;
    }
    fclose(dbr);

    // One of the loop executes one more time than required.
    rc = rc - 1;

    // Sort
    Student temp;
    for(int i=0; i < rc; i++){
        for(int j=0; i < (rc-1); i++){
            if(strcmp(fstudents[j].firstName, fstudents[j+1].firstName) > 0){
                temp = fstudents[j];
                fstudents[j] = fstudents[j+1];
                fstudents[j+1] = temp;
            }
        }
    }

    printf("\n---------- Output ----------\n");
    for(int i=0; i < rc; i++) {
        printf("First Name: %s\n", fstudents[i].firstName);
        printf("Last Name: %s\n", fstudents[i].lastName);
        printf("Address: %s\n", fstudents[i].address);
        printf("Class: %d\n", fstudents[i].class);
        printf("Roll No: %d\n", fstudents[i].rollNo);
        printf("Age: %d\n", fstudents[i].age);
        printf("\n");
    }
}
