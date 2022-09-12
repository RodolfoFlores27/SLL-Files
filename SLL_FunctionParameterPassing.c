//SLL_FunctionParameterPassing

#include <stdio.h>
#include <stdlib.h>

typedef struct node_tag {
    int data;
    struct node_tag *next;
} NODE;

void addHead (NODE **head) {
    NODE *new = (NODE *) malloc (sizeof(NODE));
    printf("Enter data: ");
    scanf("%d", &new->data);

    new->next = *head;
    *head = new;
}

void addTail (NODE **head) {
    NODE *new = (NODE *) malloc (sizeof(NODE));
    //Ask inputs for new members
    printf("Enter data: ");
    scanf("%d", &new->data);
    new->next = NULL; //new NODE is also new tail

    if (*head == NULL) {
        //Use add at head
        new->next = *head;
        *head = new;
    } else {
        NODE *temp = *head;
        while(temp->next != NULL) {
            temp = temp->next; 
        }
        temp->next = new;
    }
}

void deleteHead (NODE **head) {
    if (*head == NULL) {
        printf("List is still empty!\n");
    } else {
        NODE *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void deleteTail (NODE **head) {
    if (*head == NULL) {
        printf("Linked list is still empty!\n");
    } 
    
    //only 1 node exists
    else if ((*head)->next == NULL) {
        NODE *temp = *head;
        *head = (*head)->next;
        free(temp);
    } 
    //2+ nodes
    else {
        NODE *temp = *head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void deleteAll (NODE **head) {
    while(*head != NULL) {
        NODE *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void whilePrint (NODE *head) {
    NODE *temp = head; 
    while (temp!=NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

//alt whilePrint
/*No need to worry on using head here, because it is local to the function
and we don't intend on modifying the list.
*/
// void whilePrint (NODE *head) {
//     while (head!=NULL) {
//         printf("%d\n", head->data);
//         head = head->next;
//     }
// }

void forPrint (NODE *head) {
    //for loop
    for (NODE *temp = head; temp!= NULL; temp = temp->next) {
        printf("%d\n", temp->data);
    }
}

int main () {
    NODE *head = NULL;

    int choice;

    while (1) {
        printf("[1] Add Head\n");
        printf("[2] Add Tail\n");
        printf("[3] Delete Head\n");
        printf("[4] Delete Tail\n");
        printf("[5] Print While\n");
        printf("[6] Print For\n");
        printf("[7] Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addHead(&head); 
        } else if (choice == 2){
            addTail(&head);
        } else if (choice == 3){
            deleteHead(&head);
        } else if (choice == 4){
            deleteTail(&head);
        } else if (choice == 5){
            whilePrint(head);
        } else if (choice == 6){
            forPrint(head);
        } else if (choice == 7){
            break;
        }
    
    //Frees unfreed nodes. This function has to be here at the end.
    }
    deleteAll(&head);
}