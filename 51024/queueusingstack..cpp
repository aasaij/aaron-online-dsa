//Program to implement queue using stack
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct Stack{
	int capacity;
	int size;
	char *elements;
}stack; 

typedef struct Queue{
	stack *st1;
	stack *st2;
}queue;

stack* createStack(int maxSize){
	stack* temp = (stack*)calloc(1, sizeof(stack));
	temp->capacity = maxSize;
	temp->size = -1;
	temp->elements = (char*)calloc(maxSize, sizeof(char));
	return temp;
}

bool isFull(stack *st){
	return st->size+1 == st->capacity;
}
bool isEmpty(stack *st){
	return st->size == -1;
}
bool push(stack *st, char element){
	if (isFull(st))
		return false;
	else{
		st->size++;
		st->elements[st->size] = element;
		return true;
	}
}
char* pop(stack *st){
	if(isEmpty(st))
		return NULL;
	return st->elements[st->size--];
}
char *peek(stack *st){
	if(isEmpty(st))
		return NULL;
	return st->elements[st->size];	
}

queue *createQueue(int size){
	queue *temp = (queue*)calloc(1, sizeof(queue));
	temp->st1 = createStack(size);
	temp->st2 = createStack(size);
	return temp;
}

bool enqueue(queue *q, char element){
	return push(q->st1);
}

char* dequeue(queue *q){
	if (isEmpty(q->st1))
		return false;
	//Pusing all elements of stack1 into stack2
	for (int i = q->st1->size; i>=0; i--){
		char *element = pop(q->st1);
		push(q->st2, *element);
	}
	//Poping one element from stack2
	char *element = pop(q->st2);
	for(int i = q->st2->size; i>=0; i--){
		char *element = pop(q->st2);
		push(q->st1, *element);		
	}
	return element;
}
char* front(queue *q){
	return peek(q->st1);
}
void printQueue(queue *q){
	if (isEmpty(q->st1))
		printf("Queue is empty!");
	for(int i=q->st1->size;i>=0; i--){
		push(q->st2, q->st1->elements[i]);
	}
	for(int i = q->st2->size; i>=0; i--)
		printf("%d ", pop(q->st2));
}

int main(){
	queue myQueue = createQueue(5);
	enqueue(myQueue, 'A')
	printQueue(myQueue);
	return 0;
}


