#include <stdlib.h>
#include <stdio.h>

typedef struct list s_list;
typedef struct node node;
typedef struct queue queue;
struct list
{
        node *head;
        node *tail;
        int number_of_nodes;
};

struct node
{
        int data;
        node *link;
};

/* initializes a linked list */
void list_initialize(s_list *list);

/* inserts the data into the rear end of the list */
void list_insert_rear(s_list *list, int data);

/*delete the data from the beginning of the list */
void list_delete_front(s_list *list);

/* Returns the element that (*node_ptr) contains */
const int node_get_data(node *node_ptr);

/* Removes the last node of the linked list */
void list_delete_rear(s_list *list);

/* deallocates resources held by the list */
void list_destroy(s_list *list);

/* Queue interface begins here */

typedef struct queue
{
        s_list *ptr_list;
} queue;

void queue_initialize(queue *ptr_queue);
void queue_enqueue(queue *ptr_queue, int data);
void queue_dequeue(queue *ptr_queue);
int queue_is_empty(queue *ptr_queue);
const int queue_peek(queue *ptr_queue);
void queue_destroy(queue *ptr_queue);

/* Provide suitable implementation for the above function declarations */

int main()
{
        queue queue;
        queue_initialize(&queue);
        int choice;
        int element;
        int number_of_elements;
        int loop = 1;
        while (loop)
        {
                scanf("%d", &choice);
                switch (choice)
                {
                case 0:
                        /*enqueue elements into the queue */
                        scanf("%d", &element);
                        queue_enqueue(&queue, element);
                        break;
                case 1:
                        /* dequeue elements from the queue */
                        queue_dequeue(&queue);
                        break;
                case 2:
                        /* Print the top element of the queue */
                        if (queue_is_empty(&queue))
                                printf("Empty Queue\n");
                        else
                                printf("%d\n", queue_peek(&queue));
                        break;
                default:
                        /* Exit */
                        queue_destroy(&queue);
                        loop = 0;
                }
        }
        return 0;
}

void list_initialize(s_list *list)
{
        list->head = NULL;
        list->number_of_nodes = 0;
}

void list_insert_rear(s_list *list, int data)
{
        node *newNode = (node *)malloc(sizeof(node));
        newNode->data = data;
        newNode->link = NULL;
        if (list->head == NULL)
                list->head = newNode;
        else
        {
                node *cur;
                for (cur = list->head; cur->link != NULL; cur = cur->link)
                        ;
                cur->link = newNode;
        }
        (list->number_of_nodes)++;
}

void list_delete_front(s_list *list)
{
        if (list->head == NULL)
                return;

        node *temp = list->head;
        list->head = list->head->link;
        free(temp);
        (list->number_of_nodes)--;
}

const int node_get_data(node *node_ptr);

void list_destroy(s_list *list)
{
        while (list->head != NULL)
                list_delete_front(list);
}

void queue_initialize(queue *ptr_queue)
{
        list_initialize(ptr_queue->ptr_list);
}

void queue_enqueue(queue *ptr_queue, int data)
{
        list_insert_rear(ptr_queue->ptr_list, data);
}

void queue_dequeue(queue *ptr_queue)
{
        if (ptr_queue->ptr_list->head != NULL)
                list_delete_front(ptr_queue->ptr_list);
}

int queue_is_empty(queue *ptr_queue)
{
        if (ptr_queue->ptr_list->head == NULL)
                return 1;
        return 0;
}

const int queue_peek(queue *ptr_queue)
{
        return (ptr_queue->ptr_list->head->data);
}

void queue_destroy(queue *ptr_queue)
{
        s_list *temp = ptr_queue->ptr_list;
        ptr_queue->ptr_list = NULL;
        list_destroy(temp);
}