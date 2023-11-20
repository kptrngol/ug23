#include <stdio.h>
#include <stdlib.h>
// Napisz program który wczyta od użytkownika parę liczb a,b i zwróci pierwszą liczbę c, taką że a do potęgi c jest większe od b.
int powerCompare(int a,int b);
int main() 
{
    int base,compared,c;
    printf("Input two values: a and b, this program will calulate the first exponent of the a which results in value greater than the b\n");
    scanf("%d %d",&base,&compared);
    c = powerCompare(base, compared);
    printf("The first exponent which makes the a value greater than b is:%d\n",c);
    exit(EXIT_SUCCESS);
}
int powerCompare(int a,int b)
{
    int c = 1;
    int result = 1;
    while (result <= b)
    {
        result *= a;
        if (result > b)
        {
            printf("The value a: %d exponentiated by c: %d is equal to: %d\n",a,c,result);
            return c;
        }
        c++;
    }
}

