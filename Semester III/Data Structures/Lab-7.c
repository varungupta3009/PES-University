#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

/*inserts the given data at the front of the list*/
void list_insert_front(s_list* list, int data);

/* Returns pointer to the node at specified index, if 0 <= index < length(list).
 * Returns NULL otherwise
 */
node* list_get(s_list *list, int index);

/* Returns the element that (*node_ptr) contains */
const int node_get_data(node* node_ptr);

/*deletes the data from front*/
void list_delete_front(s_list *list);

/* deallocates resources held by the list */
void list_destroy(s_list* list);

typedef struct {
	s_list *ptr_list;
} stack;


void stack_initialize(stack* ptr_stack);
void stack_push(stack* ptr_stack, int data);
void stack_pop(stack* ptr_stack);
int stack_is_empty(stack* ptr_stack);
int stack_peek(stack* ptr_stack);
void stack_destroy(stack* ptr_stack);

int priority(char x);
void convert_infix_to_postfix(const char * source_infix, char * target_postfix);

/* Provide suitable implementation for converting an infix expression to postfix expression */

int main() {
	char source_infix[2000];
	char target_postfix[2000];
	int number_of_inputs = 0;
	scanf("%d", &number_of_inputs);
	for(int counter = 0; counter < number_of_inputs; ++counter) {
		scanf("%s", source_infix);
		convert_infix_to_postfix(source_infix, target_postfix);
		printf("%s\n", target_postfix);
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

int stack_peek(stack* ptr_stack) {
	return(ptr_stack->ptr_list->head->data);
}

void stack_destroy(stack* ptr_stack) {
	s_list *temp = ptr_stack->ptr_list;
	ptr_stack->ptr_list = NULL;
	list_destroy(temp);
	ptr_stack = NULL;
}

int priority(char x) {
	if(x == '+' || x == '-')
		return 1;
	if(x == '*' || x == '/')
		return 2;
	return 0;
}

void convert_infix_to_postfix(const char * source_infix, char * target_postfix) {
	stack stk;
	stack_initialize(&stk);
	int x, j = 0;
	for(int i = 0; i < 2000; i++) {
		switch(*(source_infix+i)) {
		case '(':
		case '{':
		case '[': stack_push(&stk, *(source_infix+i)); break;
		case ')': while((x = stack_peek(&stk)) != '(') {
				*(target_postfix+(j++)) = x;
				stack_pop(&stk);
		} stack_pop(&stk); break;
		case '}': while((x = stack_peek(&stk)) != '{') {
				*(target_postfix+(j++)) = x;
				stack_pop(&stk);
		} stack_pop(&stk); break;
		case ']': while((x = stack_peek(&stk)) != '[') {
				*(target_postfix+(j++)) = x;
				stack_pop(&stk);
		} stack_pop(&stk); break;
		case '+':
		case '-':
		case '*':
		case '/': while(!(stack_is_empty(&stk)) && priority(x = stack_peek(&stk)) >= priority(*(source_infix+i))) {
				*(target_postfix+(j++)) = x;
				stack_pop(&stk);
		} stack_push(&stk, *(source_infix+i)); break;
		default: if(isalnum(x = *(source_infix+i))) *(target_postfix+(j++)) = x; else {
				while(!(stack_is_empty(&stk))) {
					*(target_postfix+(j++)) = stack_peek(&stk);
					stack_pop(&stk);
				}
				*(target_postfix+(j)) = '\0';
				return;
		}
		}
	}
}
