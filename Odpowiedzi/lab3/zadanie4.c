#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isItEqual3(float a, float b, float c);
int isItEqual2(float a, float b);
float compareVal(float a, float b);
float findTGrtst(float a, float b, float c, char *equalityStat);

int main() {
    float a, b, c;
    char equalityCheck[] = "default";
    printf("Please provide me with three values to compare\n");
    scanf("%f \n %f \n %f",&a, &b, &c);

    int isItEqualResult = isItEqual3(a, b, c);

    if (isItEqualResult == 0) {
    printf("Values are equal");
    exit(EXIT_SUCCESS);
    }

    float result = findTGrtst(a, b, c, equalityCheck);
    
    if (strcmp(equalityCheck, "default") != 0) {
        printf("%s\n The greatest value is:%f \n", equalityCheck, result);
    } else {
        printf("The greatest value is:%f \n", result);
    }
    exit(EXIT_SUCCESS);
}

int isItEqual3(float a, float b, float c) {
    if (a == b && b == c) {
        return 0;
    } else {
        return 1;
    }
}
int isItEqual2(float a, float b) {
        if (a == b) {
        return 0;
    } else {
        return 1;
    }
}
float compareVal(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }

}
float findTGrtst(float a, float b, float c, char *equalityStat) {
    int resultab;
    int resultbc;
    if ((a + b) > (b + c) ) {
        resultab = isItEqual2(a, b);

        if (resultab == 0) {
            strcpy(equalityStat,"a and b are equal");
            return a;
        } else {
            return compareVal(a, b);
        }

    } else {
        resultbc = isItEqual2(b, c); 
        if (resultbc == 0) {
            strcpy(equalityStat, "b and c are equal");
            return b;
        } else {
            return compareVal(b, c);            
        }
    }
}