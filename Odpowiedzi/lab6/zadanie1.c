#include <stdio.h>

int factorial(int f);

int main()
{
    int input;
    scanf("%d",&input);
    printf("%d\n",factorial(input));
    return 0;
}

int factorial(int f)
{
    if(f == 0)
    {
        return 1;
    } else 
    {
        return f * factorial(f-1);
    } 
}