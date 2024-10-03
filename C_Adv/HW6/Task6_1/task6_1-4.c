#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STR_SIZE 2000

typedef struct list{
    char* word;
    struct list *next;
}list;

char* first(struct list *head){
    return head->word;
}

char* last(struct list *head){
    while(head->next != (struct list *)NULL){
        head = head->next;
    }
    return head->word;
}

struct list* insert2(char* value, list *head){
    list *res = (list*) calloc(1, sizeof(list));
    int len = strlen(value);
    res->word = malloc(len+1);
    strcpy(res->word, value);
    res->next = head;
    return res;
}

void print_list(struct list* head){
    for (list* i = head; i != NULL; i = i->next)
        printf("%s ", i->word);
    putchar('\n');
}

void getOdd(struct list* head){
    int i = 0;
    struct list *odd;
    while(head != NULL){
        if((i % 2) == 0){
            insert2(head->word, odd);
        }
        head = head->next;
        i++;
    }
    print_list(odd);
}

void printFirst(struct list* head){
    printf("first: %s\n", (char*)last(head));
}

void printLast(struct list* head){
    printf("last: %s\n", (char*)first(head));
}

int main(int argc, char const *argv[])
{
    list *w_list=NULL;
    char word[STR_SIZE] = "";

    int ch = ' ';
    int i = 0;

    while (EOF != (ch = getchar())){
        switch (ch)
        {
            case '.':
            case ' ':
                word[i] = '\0';
                w_list = insert2(word, w_list);
                i = 0;
                break;
            default:
                word[i++] = ch;
                if(i >= STR_SIZE) i = 0;
                break;
        }      
        if('.' == ch) break;
    }
    
    printFirst(w_list);
    printLast(w_list);

    getOdd(w_list);
    return 0;
}
