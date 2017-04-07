#include <stdio.h>
#include <stdlib.h>

int len_str(char*);
void copy_str(char*, char*);
char* cat_str(char*, char*);
char* ucase_str(char*);

void main() {

    char string[100];
    char duplicate[100];

    printf("Enter your string: ", string);
    gets(string);

    printf("The string you just entered is: %s\n", string);
    printf("The length of the string is: %d\n", len_str(string));
    
    copy_str(string, duplicate);
    printf("The duplicate string is: %s\n", duplicate);
    
    printf("The concated string is: %s\n", cat_str(string, duplicate));

    printf("The UPPERCASE string is: %s\n", ucase_str(string));
}

int len_str(char *p){

    int count = 0;

    while(*p != '\0'){
        p++;
        count++;
    }
    
    return count;
}


void copy_str(char *s, char *d) {

    int i = 0;
    while(s[i] != '\0'){
        d[i] = s[i];
        i++;
    }

    d[i] = '\0';
}

void copy_str_woe(char *s, char *d) {

    /*Copy string without \0 at the end*/

    int i = 0;

    while(s[i] != '\0'){
        d[i] = s[i];
        i++;
    }
}

char* cat_str(char *s, char *d) {

    int lfirst;
    lfirst = len_str(s);
    char *temp = malloc(sizeof(char) * lfirst);

    copy_str_woe(s,temp);

    for(int i = 0; d[i] != '\0'; i++, lfirst++) {
        temp = realloc(temp, sizeof(char) * (lfirst+1));
        temp[lfirst] = d[i];
    }

    temp[lfirst+1] = '\0';

    return temp;
}

char* ucase_str(char *s) {

    int i;
    int s_length = len_str(s);
    char* temp = malloc(sizeof(char)*(s_length+1));

    for(i = 0; i <= s_length; i++){
        if(s[i]>=97 && s[i]<=122) {
            temp[i] = s[i]-32;
        } else {
            temp[i] = s[i];
        }
    }
    
    temp[i+1] = '\0';

    return temp;
}
