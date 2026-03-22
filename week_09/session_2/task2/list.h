
Data *createData( int val );
List *createList( void );
void enlargeList( List *list );

void displayList( List *list );
void freeList( List *list );

void insert( List *list, Data *data, int loc );
Data *delete( List *list, int loc );
