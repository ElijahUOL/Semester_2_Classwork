
Data *createData( int val );
Stack *createStack( void );
void enlargeStack( Stack *stack );

void displayStack( Stack *stack );
void freeStack( Stack *stack );

void push( Stack *stack, Data *data );
Data *pop( Stack *stack );
