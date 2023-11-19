#include <stdio.h>
#include <stdlib.h>

int provideSqSum (int in) {
    int count = 1;
    int sum = 0;
    while (count <= in) {
        sum += count*count; 
        count++;
    }
    return sum;
}
 
int main () {
    int x;
    printf("Please, provide the n\n");
    scanf("%d",&x);
    provideSqSum(x);
    printf("Here is the result: %d\n",provideSqSum(x));
    exit(EXIT_SUCCESS);
}