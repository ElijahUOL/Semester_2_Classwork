
// structure definitions

typedef struct _point {
    float x;
    float y;
} Point;
typedef struct _point Point;
// define the Rectangle structure here

typedef struct _rectangle {
    Point p;
    float width;
    float height;
    // fields
} Rectangle;
typedef struct _rectangle Rectangle;

// function headers - implement in shapes.c

Rectangle makeRectangle( Point p, float width, float height );
float area( Rectangle r );
void shiftRectangle( Rectangle *r, Point dp );
void scaleRectangle( Rectangle *r, float scale );

//Point *corners( Rectangle r );
Rectangle rotate90( Rectangle r );