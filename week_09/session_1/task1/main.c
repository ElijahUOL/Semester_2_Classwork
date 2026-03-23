
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"

int main( void ) {

    // create some nodes
    Node *first = createNode(createData(1));
    Node *second = createNode(createData(2));
    Node *second_second = createNode(createData(2));
    Node *third = createNode(createData(3));
    Node *fourth = createNode(createData(4));

    // link the nodes
    first->next = second;
    second->next = second_second;
    second_second->next = third;
    third->next = fourth;
    
    // print the data by following links
    traverseI( first );
    traverseW( first );
    traverseR( first );

    // free all node memory (using traversal)
    freeNodes( first );

    return 0;
}
