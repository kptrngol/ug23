#include <stdio.h>
#include <stdlib.h>

// via pointers just to practice

int checkTri(int *,int *,int *);
int main () 
{
    int a, b, c;
    printf("Provide three values representing side lengths to build a triangle.\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (checkTri(&a,&b,&c) == 1)
    {
        printf("success\n");
        return 1;
    } 
    else 
    {
        printf("fail\n");
        return 0;
    }
}
int checkTri(int *aP,int *bP,int *cP)
{
    /*
        a + b > c
        b + c > a
        c + a > b
    */
    printf("a:%d,b:%d,c:%d\n",*aP,*bP,*cP);
    if (((*aP > 0) && (*bP > 0) && (*cP > 0))&&((*aP + *bP > *cP)&&(*bP + *cP > *aP)&&(*cP + *aP > *bP)))
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}
