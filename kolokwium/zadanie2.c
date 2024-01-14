#include <stdio.h>
#include <stdlib.h>
char out;
void modify(char modifier, char o, char i);
void main()
{
    char ins;
    char modifier;
    printf("Podaj znak do zmiany zmiennych\n");
    scanf("%c",&modifier);
    modify(modifier,out,ins);
    exit(EXIT_SUCCESS);

}
void modify(char modifier,char o,char i)
{
    o = modifier;
    i = modifier;
    printf("zewnętrzna: %c, wewnętrzna: %c\n",o,i);
}