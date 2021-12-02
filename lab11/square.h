#ifndef PROGA_SQUARE_H
#define PROGA_SQUARE_H

#include <math.h>

struct square{
    float x1, y1;
    float x2, y2;
};

float squarePerimeter(struct square square);
float squareArea(struct square square);


#endif //PROGA_SQUARE_H
