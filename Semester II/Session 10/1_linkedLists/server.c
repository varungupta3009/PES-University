#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

// TODO: copy, delete all

struct node *head = NULL;
struct node *current = NULL;

void printList() {
        
        struct node *ptr = head;
        printf("\nElements of the list have been printed below:\n[ ");

        while(ptr != NULL) {
                printf("%d ",ptr->key);
                ptr = ptr->next;
        }

        printf("]");
}

void insertFirst(int key) {
        struct node *link = (struct node*) malloc(sizeof(struct node));

        link->key = key;

        link->next = head;

        head = link;
}

struct node* deleteFirst() {

        struct node *temp = head;

        head = head->next;

        return temp;
}

bool isEmpty() {
        return head == NULL;
}

int length() {
        int length = 0;
        struct node *current;

        for(current = head; current != NULL; current = current->next) {
                length++;
        }

        return length;
}

struct node* find(int key) {

        struct node* current = head;

        if(head == NULL) {
                return NULL;
        }

        while(current->key != key) {

                if(current->next == NULL) {
                        return NULL;
                } else {
                        current = current->next;
                }
        }

        return current;
}

struct node* delete(int key) {

        struct node* current = head;
        struct node* previous = NULL;

        if(head == NULL) {
                return NULL;
        }

        while(current->key != key) {

                if(current->next == NULL) {
                        return NULL;
                } else {
                        previous = current;
                        current = current->next;
                }
        }

        if(current == head) {
                head = head->next;
        } else {
                previous->next = current->next;
        }

        return current;
}

int findLast() {
	
	struct node *current;

        for(current = head; current != NULL; current = current->next);

        return current->key;
}

int findMiddle() {
	
	int i;
	struct node *current;

        for(i = 0, current = head; i < (int) (length()/2); i++, current = current->next);

        return current->key;
}

int getSum() {
	
	int sum = 0;
	struct node *current;

        for(current = head; current != NULL; current = current->next)
        sum += current->key;

        return sum;
}
