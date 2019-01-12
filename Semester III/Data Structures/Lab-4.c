#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
struct node {
    int data;
    node *link;
};

typedef struct {
    node *head;
    int number_of_nodes;
}s_list;

typedef struct {
    s_list *ptr_list;
}stack;


/* initializes a linked list */
void list_initialize(s_list* list); 

void list_insert_front(s_list* list, int data);

/* Inserts data at specified position 0 <= position < length(list). 
 * Returns position if insertion is successful, else -1
 */
int list_insert_at(s_list* list, int data, int position); 

void list_delete_front(s_list *list);

/* Returns pointer to the node at specified index, if 0 <= index < length(list).
 * Returns NULL otherwise
 */
node* list_get(s_list *list, int index);

/* Returns the element that (*node_ptr) contains */
const int node_get_data(node* node_ptr);

/* Removes the last node of the linked list */
void list_delete_rear(s_list* list); 

void list_reverse(s_list* list);
void list_print(s_list* list); 

/* deallocates resources held by the list */
void list_destroy(s_list* list); 

/* Initialize a stack */
void stack_initialize(stack* ptr_stack);

/* Push data into stack */
void stack_push(stack* ptr_stack, int data);

/* Pop top element from the stack */
void stack_pop(stack* ptr_stack);

/* Returns 0 if stack is non-empty 
 * Returns 1 otherwise
 */
int stack_is_empty(stack* ptr_stack);

/* Returns top element of the stack, if stack is non-empty
 * Undefined behavior otherwise
 */
const int stack_peek(stack* ptr_stack);

/* Deallocates resouces held by the stack */
void stack_destroy(stack* ptr_stack);

/* TODO:
 * Provide suitable implementation for stack operations. You may reuse the list interface provided above.
 * The list implementation is provided below the main() function, for your reference
 */

int main()
{
    stack stk;
    stack_initialize(&stk);
    int choice;
    int element;
    int number_of_elements;
    int loop = 1;
    while(loop) {
        scanf("%d", &choice);
        switch(choice) {
            case 0: 
                /* Push elements into the stack */ 
                scanf("%d", &element);
                stack_push(&stk, element);
                break;
            case 1: 
                /* Pop elements from the stack */ 
                stack_pop(&stk);
                break;
            case 2: 
                /* Print the top element of the stack */
                if(stack_is_empty(&stk))
                    printf("Empty Stack\n");
                else 
                    printf("%d\n", stack_peek(&stk));
                break;
            default: 
            /* Exit */
            stack_destroy(&stk);
            loop = 0;
        }
    } 
    return 0;
}

void list_initialize(s_list* list) {
    list->head = NULL;
    list->number_of_nodes = 0;
}

void list_insert_front(s_list* list, int data) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->link = list->head;
    list->head = newNode;
    (list->number_of_nodes)++;
}

void list_delete_front(s_list *list) {
    if (list->head == NULL)
        return;

    node *temp = list->head;
    list->head = list->head->link;
    free(temp);
    (list->number_of_nodes)--;
}

const int node_get_data(node* node_ptr);

void list_destroy(s_list* list) {
    while(list->head != NULL)
    list_delete_front(list);
    //free(list);
}

void stack_initialize(stack* ptr_stack) {
    list_initialize(ptr_stack->ptr_list);
}

void stack_push(stack* ptr_stack, int data) {
    list_insert_front(ptr_stack->ptr_list, data);
}

void stack_pop(stack* ptr_stack) {
    if(ptr_stack->ptr_list->head != NULL)
                list_delete_front(ptr_stack->ptr_list);
}

int stack_is_empty(stack* ptr_stack) {
    if(ptr_stack->ptr_list->head == NULL)
    return 1;
    return 0;
}

const int stack_peek(stack* ptr_stack) {
    return(ptr_stack->ptr_list->head->data);
}

void stack_destroy(stack* ptr_stack) {
    s_list *temp = ptr_stack->ptr_list;
    ptr_stack->ptr_list = NULL;
    list_destroy(temp);
}
