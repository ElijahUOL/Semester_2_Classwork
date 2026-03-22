
Tree *makeTree( void );
Node *makeNode( Data *data );
Data *makeData( int val );

void traversePre( Node *loc );
void traversePost( Node *loc );
void traverseIn( Node *loc );

void freeNode( Node *node );
void deallocateTree( Node *loc );