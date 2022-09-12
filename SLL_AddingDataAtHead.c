#include<stdio.h>
#include<stdlib.h>

//SLL_AddingDataAtHead

typedef struct node_tag {
    int data;
    struct node_tag *next;
} NODE;

int main() {
    NODE *head = NULL;

    NODE *new = (NODE *) malloc (sizeof(NODE));
    printf("Enter data");
    scanf("%d", &new->data);

    new->next = head;
    head = new;
}