#include <stdio.h>
#include <stdlib.h>

int n = 0;

void prnt1(int a[100],int n);
void intpt2(int a[100],int n,int * cnt);
void reorder3(int a[100],int n,int * cnt);
int sum4(int a[100],int n);

int main() 
{
    int * cnt;
    cnt = &n;
    int myArray[100];
    int resp;
    int notfinished = 1;

    while(notfinished) 
    {
        printf("Please, provide action id\n");
        scanf("%d",&resp);
        switch(resp)
        {
            case 0:
                exit(EXIT_SUCCESS);
                break;

            case 1:
                prnt1(myArray,n);
                break;

            case 2:
                intpt2(myArray,n,cnt);
                break;

            case 3:
                reorder3(myArray,n,cnt);
                break;

            case 4:
                int sum = sum4(myArray,n); 
                if ( sum == -10) 
                {
                    printf("This array is empty");
                } else 
                {
                    printf("Sum is equal to: %d",sum);
                } 

                break;

            default:
                printf("Please provide a correct action\n");
        }
    }

}

void prnt1(int a[100],int n)
{
    if (n == 0) 
    {
        printf("error due to the empty array\n");
    } 
    else 
    {
        printf("n value: %d\n",n);
        for (int i = 0; i < n; i++ )
        {
            printf("The value is: %d\n",a[i]);
        }
    }
}

void intpt2(int a[100],int n, int * cnt)
{
    int inpt;
    printf("Please type integer you would like to add to the array\n");
    if (n > 100) 
    {
        printf("There is no free space in the array\n");
    } else if (scanf("%d",&inpt) != 1) 
    {
        printf("There is an error, please provide an integer\n");
        while (getchar() != '\n');
    } else 
    {
        a[*cnt] = inpt;
        (*cnt)++;
    }
}

void reorder3(int a[100],int n,int * cnt) 
{
    int remove;
    printf("Please, provide an element index you would like to remove\n");
    if (scanf("%d",&remove) != 1)
    {
        printf("There is an error, please provide an integer\n");
        while(getchar() != '\n');
    } else 
    {
        for (int i = remove; i <= (n-1) ;i++)
        {
            printf("inside\n");
            a[i] = a[i+1];
        }
    }


}
int sum4(int a[100],int n) 
{
    int sum = 0;
    if (n == 0) {
        return -10;
    } else 
    {
    for (int i = 0; i < n; i++)
    {
        sum += a[i]; 
    }   
    return sum;

    }
}