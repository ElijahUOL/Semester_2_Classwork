
typedef struct _data {
    int value;
} Data;

typedef struct _node {
    struct _data *data;
    struct _node *child[2];
} Node;
