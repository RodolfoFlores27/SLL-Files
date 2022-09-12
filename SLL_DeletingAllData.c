//SLL_DeletingAllData.c

#include <stdio.h>
#include <stdlib.h>

typedef struct node_tag {
    int data;
    struct node_tag *next;
} NODE;

int main () {
    while(head != NULL) {
        NODE *temp = head;
        head = head->next;
        free(temp);
    }
}