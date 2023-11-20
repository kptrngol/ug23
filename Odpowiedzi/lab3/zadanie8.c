#include <stdio.h>
#include <stdlib.h>
/*
*Napisz program który pobierze od użytkownika sześć liczb (dzień1, miesiąc1, rok1, dzień2, miesiąc2, rok2) 
*i obliczy ile lat, miesięcy i dni różni reprezentowanie przez nie daty.
*/
// int yearType();
// int monthType();
int dataValidation(int m1,int d1,int m2,int d2);
int compareDates(int y1,int m1,int d1,int y2,int m2,int d2);
int main() 
{
    int y1,m1,d1,y2,m2,d2;
    printf("Please, input two day, month and year sets to compare\n");
    do 
    {
        printf("Day 1:\n");
        scanf("%d",&d1);
        
        printf("Month 1\n");
        scanf("%d",&m1);
        
        printf("Year 1\n");
        scanf("%d",&y1);

        printf("Day 2:\n");
        scanf("%d",&d2);
        
        printf("Month 2\n");
        scanf("%d",&m2);
        
        printf("Year 2\n");
        scanf("%d",&y2);
                
        
    } while(!(dataValidation(m1, d1, m2, d2)));
    printf("%d %d %d %d %d %d\n",y1,m1,d1,y2,m2,d2);
    exit(EXIT_SUCCESS);

}
// int yearType();
// int monthType();

int dataValidation(int m1,int d1,int m2,int d2)
{
    int daysCheck(int d1,int d2) 
    {    
        if (( (d1 > 0) && (d1 <= 31) ) && ( (d2 > 0) && (d2 <= 31) )) 
        {
            return 1;
        } else 
        {
            printf("Please provide a correct day value aligned with its range (%d, %d)\n", d1, d2);
            return 0;
        }
    }

    int monthCheck(int m1,int m2) 
    {    
        if (( (m1 > 0) && (m1 <= 12)) && ((m2 > 0) && (m2 <= 12))) 
        {
            return 1;
        } else 
        {
            printf("Please provide a correct month value aligned with its range %d, %d)\n", m1, m2);
            return 0;
        }
    }

    if ((daysCheck(d1,d2) == 1) && (monthCheck(m1,m2) == 1)) 
    {
        return 1;
    } else 
    {
        return 0;
    };
}
// int compareDates(int y1,int m1,int d1,int y2,int m2,int d2)
// {

// }
