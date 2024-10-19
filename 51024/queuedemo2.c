//Program to implement Queue using LinkedList
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node{
	char data;
	struct Node *next;
}node;

typedef struct Queue{
	node *front, *rear;
}queue;

node* createNode(char data){
	node* temp =(node*) calloc(1, sizeof(node));
	temp->data = data;
	return temp;
}

queue* createQueue(){
	queue *temp = calloc(1, sizeof(queue));
	return temp;
}

bool isEmpty(queue *q){
	return q->front == NULL && q->rear == NULL;
}
queue* enqueue(queue *q, char data){
	node* newNode = createNode(data);
	if (isEmpty(q))
		q->front = q->rear = newNode;
	else{
		q->rear->next = newNode;
		q->rear = newNode;
	}
	return q;	
}
queue* dequeue(queue *q){
	if (isEmpty(q))
		return NULL;
	else{
		node* temp = q->front;
		if(!temp->next)
			q->rear = NULL;
		q->front = temp->next;
		free(temp);
		return q;
	}
}

node* getFront(queue *q){
	if (isEmpty(q))
		return NULL;
	else
		return q->front;
}

void printQueue(queue* q){
	if (isEmpty(q))
		printf("Queue is Empty\n");
	else{
		for (node* temp = q->front;temp!=q->rear;temp=temp->next )
			printf("%c ", temp->data);
		printf("%c", q->rear->data);
	}
}

void mainMenu(){
	printf("\nQueue using LinkedList\n");
	printf("**********************\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display front\n");
	printf("4. Print Queue\n");
	printf("5. Exit\n");
	printf("\nEnter your choice: ");
}

int main(){
	queue *q = createQueue();
	int choice;
	while(1){
		mainMenu();
		scanf("%d", &choice);
		switch(choice){
			case 1:{
				char element;
				printf("Enter an element : ");
				scanf("\n%c", &element);
				q = enqueue(q, element);
				printf("Enqueued...!\n");
				break;
			}
			case 2:
				if (dequeue(q))
					printf("Dequeued...!\n");
				else
					printf("Queue is empty!\n");
				break;
			case 3: {
				node *front = getFront(q);
				if (front)
					printf("%c\n",front->data );
				else
					printf("Queue is empty!");
				break;
			}				
			case 4:
				printQueue(q);
				break;
			default:
				printf("Thank you!...");
				exit(0);
		}
	}
	return 0;
}
	
	