//SLL_DeletingDataAtHead

#include <stdio.h>
#include <stdlib.h>

typedef struct node_tag {
    int data;
    struct node_tag *next;
} NODE;

int main () {
    NODE *head = NULL;

    if (head == NULL) {
        printf("List is still empty!\n");
    } else {
        NODE *temp = head;
        head = head->next;
        free(temp);
    }

}