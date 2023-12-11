#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Napisz funkcję, która przyjmuje jako argument tablicę znaków i wypisze na ekran prostokątną ramkę wypełnioną znakami z tej tablicy.
*/

int main()
{
    char inputTxt[100];
    int count;

    scanf("%s",inputTxt);
    printf("\n");
    count = strlen(inputTxt);

    for (int i = 0; i <count+2 ; i++) 
    {
        printf("-");
    }
    
    printf("\n|");
    
    printf("%s", inputTxt);

    printf("|\n");


    for (int i = 0; i < count+2; i++) 
    {
        printf("-");
    }
    printf("\n");
    exit(EXIT_SUCCESS);
}