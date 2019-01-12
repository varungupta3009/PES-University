#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int front;
	int rear;
	int capacity;
	int queue_array[1];
} circular_queue;

/* Allocates memory to circular_queue variable from heap. All the variables need to be initialised in this function only. Returns the address of the variable */
circular_queue* circular_queue_create(int size);

/* Deallocates a circular_queue from the heap */
void circular_queue_destroy(circular_queue *queue);

/* Enqueues data into circular_queue. Returns 0 if successful, -1 otherwise */
int  circular_queue_enqueue(circular_queue *queue, int data);

/* Dequeues an element from the front of the circular_queue. Returns 0 if successful, -1 otherwise */
int  circular_queue_dequeue(circular_queue *queue);

/* Returns number of elements contained in the circular_queue */
int  circular_queue_size(circular_queue *queue);

/* Returns 1 if circular_queue is empty, 0 otherwise */
int  circular_queue_is_empty(circular_queue *queue);

/* Returns 1 if circular_queue is full, 0 otherwise */
int  circular_queue_is_full(circular_queue *queue);

/* Returns the element at queue's front */
int  circular_queue_front(circular_queue *queue);

/* Prints queue contents if empty print EMPTY QUEUE*/
void circular_queue_print(circular_queue *queue);



int main()
{
	int choice;
	int number_of_elements, data;
	int size;
	scanf("%d", &size);
	circular_queue *queue = circular_queue_create(size);
	while(1) {
		scanf("%d", &choice);
		switch(choice) {
			case 1:	scanf("%d", &data);
				if(circular_queue_enqueue(queue, data) == -1)
					printf("Overflow\n");
				break;			
			case 2: 
				if(circular_queue_dequeue(queue) == -1)
					printf("Underflow\n");
				break;
				
			case 3:
				circular_queue_print(queue);
				break;

			default: 
				circular_queue_destroy(queue);
				exit(0);
		}
	}
}

circular_queue* circular_queue_create(int size) {
    circular_queue *q = malloc(sizeof(*q) + sizeof(int) * size);
    q->front = -1;
    q->rear = -1;
    q->capacity = size;
    return q;
}
void circular_queue_destroy(circular_queue *queue) {
    queue->queue_array[0] = 0;
    circular_queue *temp = queue;
    queue = NULL;
    //free(temp);
}

int  circular_queue_enqueue(circular_queue *queue, int data) {
    if(circular_queue_is_full(queue)) return -1;
    else if(queue->front == -1) {
        queue->front = 0;
        queue->rear = 0;
        queue->queue_array[queue->rear] = data;
    }
    else if(queue->rear == queue->capacity-1 && queue->front != 0) {
        queue->rear = 0;
        queue->queue_array[queue->rear] = data;
    }
    else {
        (queue->rear)++;
        queue->queue_array[queue->rear] = data;
    }
    return 0;
}

int  circular_queue_dequeue(circular_queue *queue) {
    if(circular_queue_is_empty(queue)) return -1;
    if(queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    }
    else if(queue->front == queue->capacity-1) queue->front = 0;
    else (queue->front)++;
    return 0;
}

int  circular_queue_size(circular_queue *queue) {
    return((queue->capacity - queue->front + queue->rear) % queue->capacity);
}

int  circular_queue_is_empty(circular_queue *queue) {
    return(queue->front == -1);
}

int  circular_queue_is_full(circular_queue *queue) {
    return((queue->front == 0 && queue->rear == queue->capacity-1) || (queue->rear == (queue->front-1)%(queue->capacity-1)));
}

int  circular_queue_front(circular_queue *queue) {
    return(queue->queue_array[queue->front]);
}

void circular_queue_print(circular_queue *queue) {
    if(circular_queue_is_empty(queue)) printf("EMPTY QUEUE");
    else if(queue->rear >= queue->front) for(int i = queue->front; i <= queue->rear; i++) printf("%d ", queue->queue_array[i]);
    else {
        for(int i = queue->front; i < queue->capacity; i++) printf("%d ", queue->queue_array[i]);
        for(int i = 0; i <= queue->rear; i++) printf("%d ", queue->queue_array[i]);
    }
    putchar('\n');
}
