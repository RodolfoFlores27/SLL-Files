//SLL_DeletingDataAtTail

#include <stdio.h>
#include <stdlib.h>

typedef struct node_tag {
    int data;
    struct node_tag *next;
} NODE;

int main () {
    NODE *head = NULL;
    
    if (head == NULL) {
        printf("Linked list is still empty!\n");
    } 
    
    //only 1 node exists
    else if (head->next == NULL) {
        NODE *temp = head;
        head = head->next;
        free(temp);
    } 
    //2+ nodes
    else {
        NODE *temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}