//SLL_AddingDataAtTail

#include <stdio.h>
#include <stdlib.h>

typedef struct node_tag {
    int data;
    struct node_tag *next;
} NODE;

int main () {
    //NODE *head = NULL;
 
    NODE *new = (NODE *) malloc (sizeof(NODE));
    //Ask inputs for new members
    printf("Enter data: ");
    scanf("%d", &new->data);
    new->next = NULL; //new NODE is also new tail

    if (head == NULL) {
        //Use add at head
        new->next = head;
        head = new;
    } else {
        NODE *temp = head;
        while(temp->next != NULL) {
            temp = temp->next; 
        }
        temp->next = new;
    }
}
