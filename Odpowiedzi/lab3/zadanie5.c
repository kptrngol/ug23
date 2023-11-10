#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main () {
    char value;
    printf("Please provide us with some numeric value or letter\n");
    scanf("%c",&value);
    if (isalpha(value)) {
        printf("This is a letter:%c\n",value);
    } else {
        printf("It is not a letter:%c\n", value);
    }
    exit(EXIT_SUCCESS);
}