#include <stdio.h>
#include <stdlib.h>

/*
*Zadanie 3
*Napisz program który pobierze od użytkownika dwie liczby i zwróci większą z nich.
*/

char* compareNumbers(int a, int b);
int showGreater(int a, int b);

int main() {
    int a,b;
    char* c;
    int x;
    printf("Please provide me with two numbers to compare\n");
    scanf("%d %d",&a, &b);
    c = compareNumbers(a,b);
    x = showGreater(a,b);
    printf("%s\n%d",c, x);
    exit(EXIT_SUCCESS);
}
char* compareNumbers(int a, int b){
    if (a > b) {
        return "a > b";
    } else if (a == b) {
        return "a = b";
    } else if (a < b) {
        return "a < b";
    } else {
        return "something went wrong...";
    }
}

int showGreater(int a, int b){
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
}