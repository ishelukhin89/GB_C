#include <stdio.h>
#define datatype int

typedef struct tree{
    datatype key;
    struct tree *left, *right, *parent;
}tree;

void max_min(tree *root, tree *it){
    static int min = 1000;
    static int max = 0;

    if(root == NULL)
        return;
    max = max < root->key ? root->key : max;
    min = min > root->key ? root->key : min;

    if(root->left)
        max_min(root->left, it);
    if(root->right)
        max_min(root->right, it);
    if(it == root)
        printf("%d", max-min);
}

int main(int argc, char const *argv[]){
    tree t[10]={0};
    t[0].left = t+1;
    t[0].right = t+2;
    t[0].key = 10;
    t[1].left = t+3;
    t[1].right = t+4;
    t[1].key = 5;
    t[1].parent = t+0;
    t[2].left = t+5;
    t[2].right = t+6;
    t[2].key = 15;
    t[2].parent = t+0;
    t[3].left = t+7;
    t[3].parent = t+1;
    t[3].key = 3;
    t[4].left = t+8;
    t[4].parent = t+1;
    t[4].key = 7;
    t[5].key = 13;
    t[5].parent = t+2;
    t[6].key = 18;
    t[6].parent = t+2;
    t[7].key = 1;
    t[7].parent = t+3;
    t[8].key = 6;
    t[8].parent = t+4;
    return 0;
}