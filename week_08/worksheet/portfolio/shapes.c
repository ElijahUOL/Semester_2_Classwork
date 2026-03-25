// Name: Elijah Luehrmamnn
// Student IID: 201942447


#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

Line makeLine( Point p1, Point p2 )
{
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 )
{
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}

float lineLength( Line l )
{
    float x_dif = l.p[1].x - l.p[0].x;
    float y_dif = l.p[1].y - l.p[0].y;
    float ll = sqrt((x_dif * x_dif) + (y_dif * y_dif));
    return ll;
}

float triangleArea( Triangle t )
{
    float ta = 0.5 * (abs(t.p[0].x * (t.p[1].y - t.p[2].y) + t.p[1].x * (t.p[2].y - t.p[0].y) + t.p[2].x * (t.p[0].y - t.p[1].y)));
    return ta;
}

bool samePoint( Point p1, Point p2 )
{
    if ((fabs(p1.x-p2.x)<1.0e-6)&&(fabs(p1.y-p2.y)<1.0e-6))
    {
        return true;
    }
    return false;
}


bool pointInLine( Point p, Line l)
{
    if (samePoint(p, l.p[0]) || samePoint(p, l.p[1]))
    {
        return true;
    }
    return false;
}

bool pointInTriangle( Point p, Triangle t )
{
    
    if (samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]))
    {
        return true;
    }
    return false;
}