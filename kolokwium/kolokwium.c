#include <stdio.h>
#include <stdlib.h>

int recog(int symbol);

void main()
{
    int inpt;
    printf("Podaj znak\n");
    scanf("%c",&inpt);
    recog(inpt);
    exit(EXIT_SUCCESS);

}
int recog(int symbol) {
    printf("Znak %i ma numer %d ASCII\n",symbol,symbol);
    if ((symbol >= 65  && symbol <= 90 )||(symbol >= 97  && symbol <= 122 )) 
    {
        printf("Jest to litera\n");      
    } else if (symbol > 47 && symbol <= 57)
    {
        printf("Znak to cyfra\n");      
    } else
    {
        printf("Jest to znak\n");      
    }    

}