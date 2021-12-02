#include "square.h"

float squarePerimeter(struct square square){
    float AB = sqrt(pow(square.x2 - square.x1, 2) + pow(square.y2-square.y1, 2));
    return 4*AB;
}

float squareArea(struct square square){
    float AB = sqrt(pow(square.x2 - square.x1, 2) + pow(square.y2-square.y1, 2));
    return pow(AB, 2);
}

