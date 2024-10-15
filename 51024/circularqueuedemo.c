//Program to implement circular queue
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Queue{
	int capacity;
	int front;
	int rear;
	char *elements;
}queue;
queue* createQueue(int len){
	queue *temp = calloc(1, sizeof(queue));
	temp->capacity = len;
	//Queue is empty at present. So initializing front and rear as -1
	temp->front = temp->rear = -1;
	//Allocating memory for queue elements
	temp->elements = calloc(len, sizeof(char));
	return temp;
}
bool isEmpty(queue *q){
	return q->front == -1 && q->rear == -1;
}
bool isFull(queue *q){
	return (q->rear+1 == q->capacity && q->front == 0) || (q->rear+1 == q->front);
}
bool enqueue(queue *q, char element){
	if (isFull(q)) // queue is full. Can't enqueue the element
		return false;
	else{//Queue is not full
		if (q->front == -1){
			q->front = 0;
		}
		q->rear++;
		//if rear reaches the capacity, change rear into 0
		q->rear = q->rear % q->capacity;
		q->elements[q->rear]= element;
		return true;		
	}
}
bool dequeue(queue *q){
	if (!isEmpty(q)){
		if(q->front == q->rear){ //checking whether queue has only on element
			q->front = q->rear = -1; //if so, make the queue empty
			return true;
		}
		//queue is having more than one elements
		q->front++;
		//if front reaches the capacity, change front into 0
		q->front = q->front % q->capacity;
		return true;
	}
	return false;
}

char *front(queue *q){
	if (!isEmpty(q)){
		return &(q->elements[q->front]);
	}
	return NULL;
}
void printQueue(queue *q){
	if(!isEmpty(q)){
		printf("\n");
		for(int i = q->front; i!=q->rear;){
			printf("%c ", q->elements[i]);
			i = (i+1) % q->capacity;
		}
		printf("%c\n",q->elements[q->rear]);
	}
	else
		printf("Queue is empty!");
}
void printMenu(){
	printf("\nCircular Queue Operation\n");
	printf("************************\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display front\n");
	printf("4. Print queue\n");
	printf("5. Exit\n");
	printf("Enter your choice : ");
}

int main(){
	queue *q = NULL;
	int length, choice;
	scanf("%d", &length);
	q = createQueue(length);
	while(true){
		printMenu();
		scanf("%d", &choice);
		switch(choice){
			case 1:{
				char element;
				scanf("\n%c", &element);
				if(enqueue(q, element))
					printf("Added!");
				else
					printf("Queue is full!");
				break;
			}
			case 2:
				if(dequeue(q))
					printf("Dequeued...!");
				else
					printf("Queue is empty!");
				break;
			case 3:{
				char *ch = front(q);
				if (ch)
					printf("%c", *ch);
				else
					printf("Queue is empty!");
				break;
			}
			case 4:
				printQueue(q);
				break;
			default:
				printf("Thank you...!");
				return 0;				
		}
	}		
}