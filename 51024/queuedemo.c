#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Queue{
	int capacity; // Maximum elements can store into the queue
	int front; // pointing to the first element
	int rear; // pointing to the last element
	char *elements;
}queue;

queue* createQueue(int qsize){
	queue *temp = (queue*)calloc(1, sizeof(queue));
	temp->capacity = qsize;
	temp->front = -1;
	temp->rear = -1;
	temp->elements = (char*)calloc(qsize, sizeof(char));
	return temp;
}
bool isEmpty(queue *q){
	if (q->front == -1 && q->rear == -1)
		return true;
	else
		return false;
}
char* front(queue *q){
	if (isEmpty(q))
		return NULL;
	else{
		return &q->elements[q->front];
	}
}
bool isFull(queue *q){
	if (q->rear+1 == q->capacity)
		return true;
	else
		return false;
}
bool enqueue(queue* q, char element){
	if (isFull(q))
		return false;
	else{
		if (q->front == -1) q->front++;
		q->rear++;
		q->elements[q->rear] = element;
		return true;
	}
}
bool dequeue(queue* q){
	if (isEmpty(q))
		return false;
	else{
		if (q->front == q->rear){
			q->front = q->rear = -1;
		}
		else{
			q->front++;
		}
		return true;
	}
}

void printQueue(queue *q){
	if (!isEmpty(q)){
		for (int i = q->front; i<=q->rear; i++)
			printf("%c ", q->elements[i]);
	}
}
void printMainMenu(){
	printf("\nQueue Operations\n");
	printf("****************\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display front element\n");
	printf("4. Display the queue\n");
	printf("5. Exit\n");
	printf("Enter your choice : ");	
}
void processQueue(queue *q, int choice){
	switch(choice){
		default:
			printf("\nThank you!...");
			exit(0);
		case 1:{
			char element;
			printf("Enter a character to add : ");
			scanf("\n%c", &element);
			if (enqueue(q, element))
				printf("\nEnqueued successfully!");
			else
				printf("\nQueue is full!");
			break;
		}
		case 2:
			if (dequeue(q))
				printf("Dequeued successfully!");
			else
				printf("Queue is empty");
			break;
		case 3:{
			char *element = front(q);
			if (element==NULL)
				printf("Queue is empty!");
			else
				printf("%c", *element);
			break;
		}
		case 4:
			printQueue(q);	
	}
}

int main(){
	queue *myQueue = NULL;
	int size, choice;
	printf("Queue Capacity : ");
	scanf("%d", &size);
	myQueue = createQueue(size);
	while(true){
		printMainMenu();
		scanf("%d", &choice);
		processQueue(myQueue, choice);
	}	
	return 0;
}