#include <stdio.h>
#include "square.h"

int main()
{
    printf("=== Task 1 === \n");

    struct square square;

    printf("Add first coords:  ");
    scanf("%f %f", &square.x1, &square.y1);
    printf("Add second coords: ");
    scanf("%f %f", &square.x2, &square.y2);
    printf("Perimeter: %f\n", squarePerimeter(square));
    printf("Area: %f\n", squareArea(square));

    return 0;
}
