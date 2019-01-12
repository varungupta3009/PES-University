#include <stdlib.h>
#include <stdio.h>

typedef struct heap {
	int capacity;
	int size;
	int elements[1];
} heap;

heap* heap_construct(int initial_capacity);
void  heap_destruct(heap* heap);

int  heap_get_capacity(heap *heap);
int  heap_get_size(heap *heap);

/*
        insert data into heap
        return 1 if inserted.
        return 0 if size > capacity

 */
int heap_insert(heap *heap, int data);

/*return the min value without deleting it*/
int  heap_get_min(heap *heap);
/*delete the min value in the heap*/
void heap_remove(heap *heap);

/*Print the values(data) in ascending order by deleting the min value node from the heap each time*/
void heap_print(heap *heap);

/* Write suitable implementations for the function declarations */

int main() {
	int choice, loop = 1;
	int initial_size = 0;
	scanf("%d", &initial_size);
	heap *my_heap = heap_construct(initial_size);
	while(loop) {
		scanf("%d", &choice);
		switch(choice) {
			int number_of_elements, element, index;
			int data;
		case 1:
			/* Insert elements */
			scanf("%d", &element);
			if(!heap_insert(my_heap, element))
				printf("OVERFLOW\n");

			break;

		case 2:
			/* Print elements in sorted order, and empties the heap. */
			heap_print(my_heap);
			heap_destruct(my_heap);
			loop = 0;
			break;

		default:
			heap_destruct(my_heap);
			loop = 0;
			break;
		}
	}
	return 0;
}

heap* heap_construct(int initial_capacity) {
	heap *h = malloc(sizeof(*h) + sizeof(int) * (initial_capacity + 1));
	h->size = 0;
	h->capacity = initial_capacity;
	h->elements[0] = 0;
	return h;
}

void  heap_destruct(heap* heap) {
	free(heap);
}

int  heap_get_capacity(heap *heap) {
	return heap->capacity;
}

int  heap_get_size(heap *heap) {
	return heap->size;
}

int heap_insert(heap *heap, int data) {
	if (heap->size < heap->capacity) heap->elements[++(heap->size)] = data;
	else return 0;
	int curr = heap->size;
	while (curr && data < heap->elements[curr/2]) {
		heap->elements[curr] = heap->elements[curr/2];
		heap->elements[curr/2] = data;
		curr /= 2;
	}
	return 1;
}

int  heap_get_min(heap *heap) {
	return heap->elements[1];
}

void heap_remove(heap *heap) {
	heap->elements[1] = heap->elements[(heap->size)--];
	int temp, min, curr = 1;
	while (2*curr <= heap->size) {
		min = (heap->elements[2*curr] < heap->elements[2*curr+1]) ? 2*curr : 2*curr+1;
		if (heap->elements[curr] > heap->elements[2*curr] || heap->elements[curr] > heap->elements[2*curr+1]) {
			temp = heap->elements[min];
			heap->elements[min] = heap->elements[curr];
			heap->elements[curr] = temp;
			curr = min;
		}
		else break;
	}
}

void heap_print(heap *heap) {
	while(heap_get_size(heap)) {
		printf("%d\n", heap_get_min(heap));
		heap_remove(heap);
	}
}
