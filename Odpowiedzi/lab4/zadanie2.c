#include <stdio.h>
#include <stdlib.h>

int power(int a,int b);
int main() 
{   
    int base,exponent,result;
    printf("Please provide us with the value a and value b, which is a's exponent\n");
    scanf("%d %d",&base,&exponent);
    result = power(base, exponent);
    printf("%d\n",result);
    exit(EXIT_SUCCESS);
}
int power(int a,int b)
{
    int res = 1;
    for (int count = 1; count<=b; count++)
    {
        res *= a;
    }
    return res;
}