#include <stdio.h>
#include <stdlib.h>
#include "zadanie1e.c"
/*
Napisz program w którym będzie zmienna globalna, 
w funkcji main stwórz zmienną lokalną i przypisz jej watrość zmiennej globlanej, 
po wypisz na ekran adressy obu zmiennych. 
Następnie napisz funkcję przyjmującą dwie liczby 
i wypisującą ich adresy i wywołaj ją na wcześniej utworzonych zmiennych. 
Przed uruchomieniem programu spróbuj przewidzieć jego działanie (ile różnych adresów zostanie wypisanych).
*/

void  inside();
int main() 
{
    inside();
    // scanf("%d,%d",&ins, &gl);
    exit(EXIT_SUCCESS);

}
void inside(int gl)
{
    extern int ins;
    ins = gl;
    printf("%d, %d\n",&ins, &gl);
}

