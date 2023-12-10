#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Napisz funkcję, która przyjmuje napis s i liczbę i, funkcja powinna zwracać i-ty znak napisu s.

char fishing(int i, char s[]);
int main() 
{
    int indic;
    char s[10];
    printf("Provide the string\n");
    scanf("%s", s);
    printf("Provide the indicator\n");
    scanf("%d", &indic);
    printf("Your string's length: %d\n",strlen(s));

    while (strlen(s)>10) 
    {
        printf("Your string is too long!\n");
        printf("Provide a shorter string\n");
        scanf("%s", s);
    } 
    printf("The value pointed is: %c\n",fishing(indic, s));
    exit(EXIT_SUCCESS);

}   
char fishing(int i, char s[])
{
    return s[i];
}