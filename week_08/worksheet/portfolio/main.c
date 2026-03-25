
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {
    
    // test your code by calling the functions and printing the output
    Point p1 = makePoint(1.0, 1.0);
    Point p2 = makePoint(4.0, 4.0);
    Point p3 = makePoint(1.0, 2.0);
    Point p4 = makePoint(3.0, 4.0);
    Point p5 = makePoint(2.0, 2.0);
    Line l = makeLine(p1, p2);
    if (pointInLine(p3, l))
    {
        printf("True\n");
    }
    else 
    {
        printf("False\n");
    }

    if (pointInLine(p4, l))
    {
        printf("True\n");
    }
    else 
    {
        printf("False\n");
    }

    if (pointInLine(p5, l))
    {
        printf("True\n");
    }
    else 
    {
        printf("False\n");
    }
    
    return 0;
}