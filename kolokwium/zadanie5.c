#include <stdio.h>
#include <stdlib.h>
int calculate(int el1,int el2, int op, int res);
int calculate2(int el1,int el2, int op, int res);

void main()
{
    int a, b, operation1, c, operation2, result;
    printf("Podaj wartość a\n");
    scanf("%d",&a);
    printf("Podaj wartość b\n");
    scanf("%d",&b);
    printf("Podaj numer operacji \n(AND - 1, OR - 2, NAND - 3, NOR - 4)\n");
    scanf("%d",&operation1);
    calculate(a,b,operation1, result);
    do 
    {
        printf("Podaj numer operacji \n(AND - 1, OR - 2, NAND - 3, NOR - 4\n");
        scanf("%d",&operation2);
        printf("Podaj wartość c\n");
        scanf("%d",&c);
        calculate2(result,c,operation2, result);
    }
    while(operation1 >= 1 && operation1 <= 4);
    exit(EXIT_SUCCESS);
}
int calculate(int el1,int el2, int op,int res)
{
    printf("dane początkowe: a: %d, b: %d\n",el1,el2);
    switch (op)
    {
        case 1:
            if ((el1 && el2)==1)
            {
                printf("prawda\n");
                res = 1;
                return res;
            } else 
            {
                printf("fałsz\n");
            }
        break;
        case 2:
            if ((el1 || el2)==1)
            {
                printf("prawda\n");
                res = 1;
                return res;
            } else 
            {
                printf("fałsz\n");
            }

        break;
        case 3:

            if ((el1 && el2)==1)
            {
                printf("fałsz\n");
                res = 1;
                return res;
            }  else 
            {
                printf("prawda\n");
            }
        break;
        case 4:
            if ((el1 || el2)==1)
            {
                printf("fałsz\n");
                res = 1;
                return res;
            } else 
            {
                printf("prawda\n");
            }
        break;

    }

    printf("a: %d,b: %d, operacja typ numer: %d, rezultat: %d",el1,el2,op,res);
    return res;
}
int calculate2(int el1,int el2, int op,int res)
{
    printf("dane początkowe: a: %d, b: %d\n",el1,el2);
    switch (op)
    {
        case 1:
            if ((el1 && el2)==1)
            {
                printf("prawda\n");
                res = 1;
                return res;
            } else 
            {
                printf("fałsz\n");
            }
        break;
        case 2:
            if ((el1 || el2)==1)
            {
                printf("prawda\n");
                res = 1;
                return res;
            } else 
            {
                printf("fałsz\n");
            }

        break;
        case 3:

            if ((el1 && el2)==1)
            {
                printf("fałsz\n");
                res = 1;
                return res;
            }  else 
            {
                printf("prawda\n");
            }
        break;
        case 4:
            if ((el1 || el2)==1)
            {
                printf("fałsz\n");
                res = 1;
                return res;
            } else 
            {
                printf("prawda\n");
            }
        break;

    }

    printf("a: %d,b: %d, operacja typ numer: %d, rezultat: %d",el1,el2,op,res);
    return res;
}