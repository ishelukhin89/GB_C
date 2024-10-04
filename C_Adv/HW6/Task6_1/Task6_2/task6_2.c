#include <stdio.h>
#define datatype int

typedef struct tree{
    datatype key;
    struct tree *left, *right, *parent;
}tree;

