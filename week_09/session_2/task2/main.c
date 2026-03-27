
#include <stdio.h>
#include <stdlib.h>

#include "list_structures.h"
#include "list.h"

int main( void ) {

    List *list = createList();

    // insert() - add some data to the list
    insert( list, createData(1), 0 ); // add with value 1 at index 0
    displayList( list );

    // further insert operations here, use displayList() to verify
    insert(list, createData(2), 1);
    insert(list, createData(3), 2);
    insert(list, createData(4), 3);
    insert(list, createData(5), 4);
    insert(list, createData(6), 5);
    displayList(list);
    delete(list, 4);
    delete(list, 5);
    displayList(list);
    // free list dynamic memory
    freeList( list );
    free( list );
    
    return 0;
}
