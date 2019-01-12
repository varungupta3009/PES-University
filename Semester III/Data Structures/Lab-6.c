#include <stdio.h>
#include <stdlib.h>

typedef struct list s_list;
typedef struct node node;

struct list {
        node *head;
        int number_of_nodes;
};

struct node {
        int data;
        node *link;
};

/* initializes a linked list */
s_list* list_initialize(s_list* list);

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


typedef struct {
        s_list *ptr_list;
} stack;

void stack_initialize(stack* ptr_stack);
void stack_push(stack* ptr_stack, int data);
void stack_pop(stack* ptr_stack);
int stack_is_empty(stack* ptr_stack);
const int stack_peek(stack* ptr_stack);
void stack_destroy(stack* ptr_stack);

/* The implementations for the above functions are provided below main() */

/* Returns 1 if the parenthesis sequence is well formed, else returns 0 */
int match_parenthesis(const char * string);

/* TODO:
 * Provide suitable implementation for the above function declaration, namely, match_parenthesis()
 */

int main() {
        char parenthesis_sequence[100];
        int number_of_inputs = 0;
        scanf("%d", &number_of_inputs);
        for(int counter = 0; counter < number_of_inputs; ++counter) {
                scanf("%s", parenthesis_sequence);
                printf("%d\n", match_parenthesis(parenthesis_sequence));
        }
        return 0;
}

s_list* list_initialize(s_list* list) {
        list = (s_list*) malloc (sizeof(s_list));
        list->head = NULL;
        list->number_of_nodes = 0;
        return list;
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
}

void stack_initialize(stack* ptr_stack) {
        ptr_stack->ptr_list = list_initialize(ptr_stack->ptr_list);
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
        ptr_stack = NULL;
}

int match_parenthesis(const char * string) {
        stack new_stack;
        stack_initialize(&new_stack);
        for(int i = 0; i < 100; i++) {
                switch(*(string+i)) {
                case '{':
                case '(':
                case '[': {
                        stack_push(&new_stack, *(string+i)); break;
                }
                case '}': {
                        if(stack_is_empty(&new_stack) || stack_peek(&new_stack) != '{') {stack_destroy(&new_stack); return 0;} stack_pop(&new_stack); break;
                }
                case ')': {
                        if(stack_is_empty(&new_stack) || stack_peek(&new_stack) != '(') {stack_destroy(&new_stack); return 0;} stack_pop(&new_stack); break;
                }
                case ']': {
                        if(stack_is_empty(&new_stack) || stack_peek(&new_stack) != '[') {stack_destroy(&new_stack); return 0;} stack_pop(&new_stack); break;
                }
                default: if (stack_is_empty(&new_stack)) {
                                stack_destroy(&new_stack);
                                return 1;
                }
                        else return 0;
                }
        }
}
