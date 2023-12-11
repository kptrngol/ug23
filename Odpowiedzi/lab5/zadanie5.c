#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Napisz funkcję, która przyjmuje jako argumenty cztery liczby naturalne a1,b1,a2,b2 reprezentujące odcinki [a1,b1] i [a2,b2]. 
*/     
void calcCrossSection(int a1,int b1,int a2,int b2, int * resulta, int * resultb);

int main() 
{
    int a1,b1,a2,b2;
    printf("Please, provide two values for each of two segments\n");
    printf("Segment 1, value a and b\n");
    scanf("%d",&a1);
    scanf("%d",&b1);
    printf("Segment 2, value a and b\n");
    scanf("%d",&a2);
    scanf("%d",&b2);
    
    int crossSection[2];
    int * pCrossa;
    int * pCrossb;

    pCrossa = &crossSection[0];
    pCrossb = &crossSection[1];


    calcCrossSection(a1,b1,a2,b2,pCrossa, pCrossb);

    printf("Result:%d,%d\n",*pCrossa,*pCrossb);
    exit(EXIT_SUCCESS);
}

void calcCrossSection(int a1,int b1,int a2,int b2, int * resulta, int * resultb) 
{
    int start1, end1;
    int start2, end2;

    // first line

    if (b1>=a1) 
    {
        start1 = a1;
        end1 = b1;
    } else
    {
        start1 = b1;
        end1 = a1;
    }

    // second line

    if (b2>=a2) 
    {
        start2 = a2;
        end2 = b2;
    } else
    {
        start2 = b2;
        end2 = a2;
    }

    if (start1>=start2) 
    {
        *resulta = start1;
    } else
    {
        *resulta = start2;
    }

    if (end1<=end2) 
    {
        *resultb = end1;
    } else
    {
        *resultb = end2;
    }
}
