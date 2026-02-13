
/*
 * Compute the roots of quadratic equation.
 * We will assume that 2 real roots exist at this point.
 * The equation is specified with 3 real constants a,b,c
 *    a.x^2 + b.x + c = 0
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float a = 2.0;
    float b = 5.0;
    float c = -3.0;
    float root1, root2;

    /*
     * Implement the formula for the 2 roots of a quadratic.
     * You can define additional variable for intermediate results to make the code simpler.
     * Print out the final results for the 2 roots as float values.
     */

    root1 = (-b + sqrt((b*b)-4*a*c)) / (2*a);
    root2 = (-b - sqrt((b*b)-4*a*c)) / (2*a);
    printf("The roots of the equation are %f and %f\n", root1, root2);
    return 0;
}
 