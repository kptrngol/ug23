#include <stdio.h>
#include <stdlib.h>

int testDate(int y);
int testL(int y);

void main () {
    int year;
    printf("Please provide us with a specific year to test\n");
    scanf("%d",&year);
    testDate(year);

    if (testL(year)) {
        printf("This year: %d is a leap year!\n");
    } else {
        printf("This year: %d is NOT a leap year!\n");
    }
    exit(EXIT_SUCCESS);
}

int testDate(int y){
    if(y < 0) {
        printf("Invalid input. It must be a non-negative value. Please try again.\n");
        exit(EXIT_FAILURE);
    } 
}
int testL(int y) {
    if (y%4==0 && y%100!=0) {
        return 1;
    } else {
        return 0;
    }
}
