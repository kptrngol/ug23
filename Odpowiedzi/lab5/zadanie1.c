#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Napisz funkcję, która przyjmuje napis s i liczbę i, funkcja powinna zwracać i-ty znak napisu s.

char fishing(int i, char s[]);
int main() 
{
    int indic;
    char s[100];
    printf("Provide the string\n");
    scanf("%s", &s);
    printf("Provide the indicator\n");
    scanf("%d", &indic);
    printf("%c",fishing(indic, s));
    exit(EXIT_SUCCESS);

}   
char fishing(int i, char s[])
{
    return s[i];
}