
#include <stdio.h>
#include <stdlib.h>

#include "queue_structures.h"
#include "queue.h"

int main( void ) {

    Queue *queue = createQueue();

    // code to test join, leave and display functions

    // free queue dynamic memory
    freeQueue( queue );
    free( queue );
    
    return 0;
}
