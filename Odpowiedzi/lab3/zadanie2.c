#include <stdio.h>
#include <stdlib.h>
 
void count(int a, int b, int *modifiedArray);

void main () {
    int a, b;
    int calcResult[4];
    printf("Please provide me with two values to run calculations \n");
    scanf("%d %d", &a, &b);
    count(a, b, calcResult);
    printf("The result of your calculations is %d\n", calcResult[0]);
    printf("The result of your calculations is %d\n", calcResult[1]);
    printf("The result of your calculations is %d\n", calcResult[2]);
    printf("The result of your calculations is %d\n", calcResult[3]);
    printf("The result of your calculations is %d\n", calcResult[4]);
    printf("The result of your calculations is %d\n", calcResult[5]);    
    exit(EXIT_SUCCESS);
}

void count (int a, int b, int *modifiedArray) {
    modifiedArray[0] = a+b;
    modifiedArray[1] = a-b;
    modifiedArray[2] = a*b;
    modifiedArray[3] = a/b;
    modifiedArray[4] = a%b;
} 
