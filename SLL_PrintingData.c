//SLL_PrintingData

#include <stdio.h>
#include <stdlib.h>

typedef struct node_tag {
    int data;
    struct node_tag *next;
} NODE;

int main() {
    //Add at Head
    NODE *head = NULL;

    NODE *new = (NODE *) malloc (sizeof(NODE));
    printf("Enter data");
    scanf("%d", &new->data);

    new->next = head;
    head = new;


    // NODE *temp = head; 
    // while (temp!=NULL) {
    //     printf("%d\n", temp->data);
    //     temp = temp->next;
    // }

    //for loop
    for (NODE *temp = head; temp!= NULL; temp = temp->next) {
        printf("%d\n", temp->data);
    }
}