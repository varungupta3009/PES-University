#include <stdio.h>
#include <stdlib.h>

//Node of the linked list
typedef struct Node
{
        int data;
        struct Node *link;
} Node;

//Handle of the list. Its head points to the first node in the list.
typedef struct List
{
        Node *head;
        int length;
} List;

//Create an empty linked list
List *create_list()
{
        List *newList = (List *)malloc(sizeof(List));
        newList->head = NULL;
        newList->length = 0;
        return newList;
}

//Insert a new Node at the beginning of the linked list
void insert_beginning(List *myList, int data)
{
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->link = myList->head;
        myList->head = newNode;
        (myList->length)++;
}

//Delete the first Node having the element "data".
//No operation if there is no such Node.
void delete_element(List *myList, int data)
{
        if (myList->head == NULL)
                return;
        Node *cur, *prev = myList->head;
        if (prev->data == data)
        {
                myList->head = prev->link;
                free(prev);
                return;
        }
        for (cur = myList->head; cur != NULL; prev = cur, cur = cur->link)
                if (cur->data == data)
                {
                        prev->link = cur->link;
                        free(cur);
                        (myList->length)--;
                        return;
                }
}

//Display the elements of the linked list seperated by spaces in a single line
void disp_list(List *myList)
{
        Node *cur;
        for (cur = myList->head; cur != NULL; cur = cur->link)
                printf("%d ", cur->data);
        putchar('\n');
}

//Delete the linked list along with any nodes it has.
void delete_list(List *myList)
{
        Node *cur;
        for (cur = myList->head; cur != NULL; cur = cur->link)
                ;
        free(cur);
        free(myList);
}

int list_insert_at(List *myList, int data, int position)
{
        if (!(position >= 0 && position < myList->length))
                return -1;

        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;

        if (position == 0)
        {
                newNode->link = myList->head;
                myList->head = newNode;
        }

        else
        {
                int i = 0;
                Node *cur;
                for (cur = myList->head; i < position - 1; cur = cur->link, i++)
                        ;
                newNode->link = cur->link;
                cur->link = newNode;
        }

        (myList->length)++;
        return position;
}

void list_delete_rear(List *myList)
{
        if (myList->head == NULL)
                return;

        if (myList->head->link == NULL)
        {
                Node *temp = myList->head;
                myList->head = NULL;
                free(temp);
                myList->length = 0;
        }

        else
        {
                Node *cur, *prev = cur;
                for (cur = myList->head; cur->link != NULL; prev = cur, cur = cur->link)
                        ;
                prev->link = NULL;
                free(cur);
                (myList->length)--;
        }
}

void list_reverse(List *myList)
{
        Node *cur, *prev = NULL, *next = NULL;
        for (cur = myList->head; cur != NULL; next = cur->link, cur->link = prev, prev = cur, cur = next)
                ;
        myList->head = prev;
}

int main()
{
        int choice = 1;
        int element, index;
        List *list = create_list();
        while (choice >= 0 && choice < 5)
        {
                //printf("1. Insert in the beginning \n");
                //printf("2. Delete specified element \n");
                //printf("3. Display \n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 0:
                        scanf("%d", &element);
                        insert_beginning(list, element);
                        break;
                case 1:
                        scanf("%d%d", &element, &index);
                        list_insert_at(list, element, index);
                        break;
                case 2:
                        list_delete_rear(list);
                        break;
                case 3:
                        list_reverse(list);
                        break;
                case 4:
                        disp_list(list);
                        printf("\n");
                        break;
                }
        }
        delete_list(list);
        return 0;
}