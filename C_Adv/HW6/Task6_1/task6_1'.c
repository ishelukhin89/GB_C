#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node * next;
}node;

void print(struct node* list){
    while (list){
        printf("%d", list->val);
        list = list->next;
    }
}

//void free(struct node* list){}

struct node* addInOrder(struct node* list, int value){
    struct node* newNode = (struct node*) malloc(sizeof(struct node*));
    newNode->val = value;
    newNode->next = NULL;

    if(list == NULL || value < list->val){
        newNode->next = list;
        return newNode;
    }

    struct node* ptr = list;

    while (ptr != NULL && ptr->next != NULL){
        if(ptr->val <= value && ptr->next->val > value) 
            break;
        ptr = ptr->next;
    }

    newNode->next = ptr->next;
    ptr->next = newNode;
    return list;
}

int main(void)
{
    int value = 0;
    scanf("%d", &value);
    struct node* list = NULL;
    while (value != 0){
        list = addInOrder(list, value);
        scanf("%d", &value);
        print(list);
        printf("\n");
    }
    
    return 0;
}

