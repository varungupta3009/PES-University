#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
        int data;
        struct Node *prev;
        struct Node *next;
} Node;

typedef struct
{
        Node *head;
        Node *tail;
        unsigned int number_of_nodes;
} DLList;

/* Create a doubly linked list */
DLList *dllist_create()
{
        DLList *newList = (DLList *)malloc(sizeof(DLList));
        newList->head = NULL;
        newList->tail = NULL;
        newList->number_of_nodes = 0;
        return newList;
}
/* Insert data at the beginning of the list */
void dllist_insert_beginning(DLList *list, int data)
{
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = NULL;
        newNode->next = list->head;

        (list->number_of_nodes)++;

        if (list->number_of_nodes == 1)
                list->tail = newNode;

        else
                list->head->prev = newNode;

        list->head = newNode;
}
/* Insert 'data' into the 'list', before object at 'index', where 0 <= 'index' < number_of_nodes, for a non-empty list */
void dllist_insert_at(DLList *list, int data, int index)
{
        if (index < 0 || index > list->number_of_nodes)
                return;

        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;

        if (!(index))
                dllist_insert_beginning(list, data);

        else if (index == list->number_of_nodes)
        {
                newNode->next = NULL;
                newNode->prev = list->tail;
                list->tail->next = newNode;
                list->tail = newNode;
                (list->number_of_nodes)++;
        }

        else
        {
                int i = 0;
                Node *cur;
                for (cur = list->head; cur != NULL && i < index; cur = cur->next, i++)
                        ;
                newNode->next = cur;
                newNode->prev = cur->prev;
                cur->prev->next = newNode;
                cur->prev = newNode;
                (list->number_of_nodes)++;
        }
}
/* Removes last element of a non-empty list */
void dllist_delete_rear(DLList *list)
{
        if (list->head == NULL)
                return;

        if (list->head->next == NULL)
        {
                Node *temp = list->head;
                list->head = NULL;
                list->tail = NULL;
                free(temp);
                list->number_of_nodes = 0;
        }

        else
        {
                Node *temp = list->tail;
                list->tail = list->tail->prev;
                list->tail->next = NULL;
                free(temp);
                (list->number_of_nodes)--;
        }
}
/* Removes an element at specified 'index', where 0 <= 'index' < number_of_nodes, for a non-empty list */
void dllist_delete_at(DLList *list, int index)
{
        if (index < 0 || index >= list->number_of_nodes || list->head == NULL)
                return;

        if (list->number_of_nodes == 1 || index == list->number_of_nodes - 1)
                dllist_delete_rear(list);

        else
        {
                int i = 0;
                Node *cur;
                for (cur = list->head; i < index; cur = cur->next, i++)
                        ;

                if (index > 0)
                        cur->prev->next = cur->next;
                else
                        list->head = cur->next;

                cur->next->prev = cur->prev;
                free(cur);
                (list->number_of_nodes)--;
        }
}
/* Print list contents */
void dllist_print(DLList *list)
{
        Node *cur;
        for (cur = list->head; cur != NULL; cur = cur->next)
                printf("%d ", cur->data);
        putchar('\n');
}
/* Deallocate resources held by a list */
void dllist_destroy(DLList **list)
{
        Node *cur;
        for (cur = (*list)->head; cur != NULL; cur = cur->next)
                free(cur);
        free(*list);
}
int main()
{
        unsigned int choice = 0;
        int element;
        int position;
        DLList *list = dllist_create();
        while (choice < 5)
        {
                scanf("%d", &choice);
                switch (choice)
                {
                case 0:
                        /* Insert in the beginning */
                        scanf("%d", &element);
                        dllist_insert_beginning(list, element);
                        break;

                case 1:
                        /* Insert at specified position */
                        scanf("%d", &element);
                        scanf("%d", &position);
                        dllist_insert_at(list, element, position);
                        break;

                case 2:
                        /* Delete element at specified position */
                        scanf("%d", &position);
                        dllist_delete_at(list, position);
                        break;

                case 3:
                        /* Delete element at the end of the list */
                        dllist_delete_rear(list);
                        break;

                case 4:
                        /* Print list contents */
                        dllist_print(list);
                        break;

                default:
                        dllist_destroy(&list);
                }
        }
        return 0;
}

/* TODO:
 * Provide suitable implementations for the above function declarations, describing operations on a doubly linked list.
 * Take care of the border cases.
 * Note: DO NOT delete or modify the preloaded code.
 */