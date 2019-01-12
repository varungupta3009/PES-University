//A program to perform the following operations using a Linked List.
#include <stdio.h>
#include <stdlib.h>

//Node of the linked list
typedef struct Node {
        int data;
        struct Node *link;
} Node;

//Handle of the list. Its head points to the first node in the list.
typedef struct List {
        Node *head;
        int length;
} List;

//Create an empty linked list
List* create_list() {
        List *newList = (List*)malloc(sizeof(List));
        newList->head = NULL;
        newList->length = 0;
        return newList;
}

//Insert a new Node at the beginning of the linked list
void insert_beginning(List *myList, int data) {
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->link = myList->head;
        myList->head = newNode;
        (myList->length)++;
}

//Delete the first Node having the element "data".
//No operation if there is no such Node.
void delete_element(List *myList, int data) {
        if(myList->head == NULL)
                return;
        Node *cur, *prev = myList->head;
        if(prev->data == data) {
                myList->head = prev->link;
                free(prev);
                return;
        }
        for(cur = myList->head; cur != NULL; prev = cur, cur = cur->link)
                if(cur->data == data) {
                        prev->link = cur->link;
                        free(cur);
                        (myList->length)--;
                        return;
                }
}

//Display the elements of the linked list seperated by spaces in a single line
void disp_list(List *myList) {
        Node *cur;
        for(cur = myList->head; cur != NULL; cur = cur->link)
                printf("%d ", cur->data);
        putchar('\b\n');
}

//Delete the linked list along with any nodes it has.
void delete_list(List *myList) {
        Node *cur;
        for(cur = myList->head; cur != NULL; cur = cur->link);
        free(cur);
        free(myList);
}

int main()
{
        int choice = 1;
        int element;
        List* list = create_list();
        while(choice > 0 && choice < 4) {
                //printf("1. Insert in the beginning \n");
                //printf("2. Delete specified element \n");
                //printf("3. Display \n");
                scanf("%d",&choice);
                switch(choice) {
                case 1: //printf("Enter the element\n");
                        scanf("%d",&element);
                        insert_beginning(list, element);
                        break;
                case 2: //printf("Enter the element to be deleted\n");
                        scanf("%d", &element);
                        delete_element(list, element);
                        break;
                case 3:
                        disp_list(list);
                        break;
                }
        }
        delete_list(list);
        return 0;
}
