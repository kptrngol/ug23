#include <stdio.h>
#include <stdlib.h>

void greet(void);
int main(){
    greet();
    exit(EXIT_SUCCESS);;
}
void greet(void) {
    printf("Hello, World!\n");
}