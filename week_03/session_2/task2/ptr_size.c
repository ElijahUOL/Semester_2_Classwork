
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    long *testLongIntPtr;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));
    printf("Long int pointer size is %ld bytes\n",sizeof(testLongIntPtr));

    return 0;
}
