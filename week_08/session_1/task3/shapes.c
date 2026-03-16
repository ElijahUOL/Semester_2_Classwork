
#include <stdio.h>
#include "shapes.h"

int main( void ) 
{
    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Point point = {0, 1};
    Point point2 = {3, 4};
    Rectangle rec = makeRectangle(point, 5, 6);
    printf("%.2f\n", area(rec));
    printf("%.2f, %.2f\n", rec.p.x, rec.p.y);
    scaleRectangle(&rec, 2);
    shiftRectangle(&rec, point2);
    printf("%.2f\n", area(rec));
    printf("%.2f, %.2f\n", rec.p.x, rec.p.y);
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height )
{
    Rectangle r;
    r.p = p;
    r.width = width;
    r.height = height;
    return r;
}

float area( Rectangle r ) 
{
    float a = 0.0;
    a = r.width * r.height;
    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) 
{
    r->p = dp;
    return;
}

void scaleRectangle( Rectangle *r, float scale )
{
    r->width = r->width * scale;
    r->height = r->height * scale;
    return;
}

Rectangle rotate90( Rectangle r )
{
    Rectangle new_r;
    new_r.width = r.height;
    new_r.height = r.width;
    return new_r;
}

