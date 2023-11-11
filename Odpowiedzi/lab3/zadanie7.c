#include <stdio.h>
#include <stdlib.h>

/*
*Napisz program który pobierze od użytkownika trzy liczby 
*(dzień, miesiąc, rok) i sprawdzi czy tworzą poprawną datę.
*/
int dayCheck(int d);
int monthCheck(int m);
int yearCheck(int y);
int dateCheck(int d, int m, int y);

int main () {
    int day, month, year;
    printf("Please provide 3 values: day, month, year:\n");
    scanf("%d\n %d\n %d",&day,&month,&year);
    
    while (dateCheck(day, month, year) != 1) {
        printf("Please provide correct 3 values that represent: day, month, year:\n");
        scanf("%d\n %d\n %d",&day,&month,&year);
        dateCheck(day, month, year);
    }
    
    printf("Provided date is:\n %d/%d/%d\n", day, month, year);  
    exit(EXIT_SUCCESS);
}

int dayCheck(int d) {
    if (d <= 0 || d > 31) {
        printf("Day input is NOT correct\n");
        return 0;
    }
    return 1;
}
int monthCheck(int m) {
    if (m <= 0 || m > 12) {
        printf("Month input is NOT correct\n");
        return 0;

    }
    return 1;
}
int yearCheck(int y) {
    if (y <= 0) {
        printf("Year input is NOT correct\n");
        return 0;
    }
    return 1;
}
int dateCheck(int d, int m, int y) {
    if (dayCheck(d) && monthCheck(m) && yearCheck(y)) {
        return 1;
    } else {
        return 0;
    }
}