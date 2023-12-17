#include <stdio.h>
#include <stdlib.h>
/*
WEJŚCIE: Tablica TAB[1..N], element n
WYJŚCIE: True jeśli n znajduje się w TAB, False w przeciwnym przypadku

index = 1
wynik = False
Dopóki index <= N wykonuj:
   Jeśli TAB[index] == n to:
      wynik = True
   index = index + 1
Wypisz wynik

*/
int linear(int ar[], int n, int s);
int main() 
{
    int searched, length;
    int tab[] = {1,2,3,4,5,6,7,8,9,10};
    length = 10;
    printf("Provide searched value\n");
    scanf("%d",&searched);
    if((linear(tab,searched,length) != 1)) 
    {
        printf("The n: %d does not exist inside this array!\n", searched);
        exit(EXIT_FAILURE);
    }
}
int linear(int ar[], int n, int s)
{
    int i = 0;
    while(i <= s) 
    {
        if (ar[i] == n)
        {
            printf("The n: %d exists inside this array!\n", ar[i]);
            exit(EXIT_SUCCESS);
        }
        i++;
    }
}
