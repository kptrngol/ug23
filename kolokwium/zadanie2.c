#include <stdio.h>
#include <stdlib.h>
char out;

void modify(char modifier, char * p, char i);
void main()
{
    char * pnt;
    pnt = &out;
    char ins;
    char modifier;
    printf("Podaj znak do zmiany zmiennych\n");
    scanf("%c",&modifier);
    modify(modifier,pnt,ins);
    exit(EXIT_SUCCESS);

}
void modify(char modifier,char * p,char i)
{
    *p = modifier;
    i = modifier;
    printf("zewnętrzna: %c, wewnętrzna: %c\n",out,i);
}