#include <stdio.h>
#include <stdlib.h>
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

int main(){
	queue *myQueue = createQueue(10);
	
	return 0;
}