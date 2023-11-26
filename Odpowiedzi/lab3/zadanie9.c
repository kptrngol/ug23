#include <stdio.h>
#include <stdlib.h>

/*
*Napisz program który pobierze od użytkownika dwie pary liczb reprezentujące przeciwległe wierzchołki prostokąta 
*i na ich podstawie wyznaczy pole i obwód tego prostokąta.
*/

void inputABVertices(int *, int *);
void calcXYDif (int *, int *, int *, int *, int *, int *);
int accept(int *, int *);
int main()
{
    int a[2], b[2];
    int xD, yD, area, perimeter;

    inputABVertices(a,b);

    while (!accept(a,b))
    {
        inputABVertices(a,b);
    }

    // Calculate the difference between x aixs and y axis points 
    calcXYDif(a, b, &xD, &yD, &area, &perimeter);

    printf("Area: %d, Perimeter: %d)\n",area, perimeter);
    // Calculate an area and a perimeter of the rectangle 

    exit(EXIT_SUCCESS);

}
void inputABVertices(int *pointA, int *pointB)
{
    printf("Please proivde vertice coordinates for point A (x,y)\n");
    scanf("%d %d", &pointA[0], &pointA[1]);
    printf("Please proivde vertice coordinates for point B (x,y)\n");
    scanf("%d %d", &pointB[0], &pointB[1]);
}
int accept(int *pointA, int *pointB)
{
    int answer;
    printf("Do you accept these vertices: A:(%d,%d), B:(%d,%d)?\nFor yes: 1, for no: 0\n",pointA[0], pointA[1], pointB[0], pointB[1]);
    scanf("%d",&answer);
    if (answer != 1)
    {
        return 0;
    } else 
    {
        return 1;
    }
}
void calcXYDif (int *pointA,int *pointB, int *xDif, int *yDif,int *a,int *p)
{
    *xDif = abs(pointA[0] - pointB[0]);
    *yDif = abs(pointA[1] - pointB[1]);
    *a = (*xDif) * (*yDif);
    if (*a > 0) 
    {
        *p = 2 * (*xDif + *yDif);
    } else 
    {
        *p = 0;
    }
}
