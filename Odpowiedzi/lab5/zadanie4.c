#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Napisz program, który sprawdza czy podane przez użytkownika słowo jest palindromem. Wykorzystaj rozwiązania zadań 2,3.
int compare();
int main()
{
    char word[20];
    int* cmprResults[strlen(word)];

    printf("Provide a word you would like to check against being palindrome\n");
    scanf("%s",word);


    while (strlen(word)>20) 
    {
        printf("Your string is too long!\n");
        printf("Provide a shorter string\n");
        scanf("%s", word);
    } 

    int i = strlen(word);
    int k = 0;
    while (i != 0) 
    {
        // printf("Char <- is:%c\n",word[i-1]);
        // printf("Char -> is:%c\n",word[k]);
        // printf("%d\n",((word[i-1] == word[k])));
        if (((tolower(word[i-1])) != (tolower(word[k]))))
        {
            printf("Characters are not matching: %c vs %c\n",tolower(word[i-1]),tolower(word[k]));
            exit(EXIT_FAILURE);
        }
        i--;
        k++;
    }
    printf("This string is a palindrome!\n");
    exit(EXIT_SUCCESS);   
}