//Program to implement stack using Linkedlist
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node{
	int data;
	struct Node *next;
}node;

node* createNode(int data){
	node* temp = (node*)calloc(1, sizeof(node));
	if (temp) //if temp is not NULL
		temp->data = data;
	return temp;
}
bool isEmpty(node* stack){
//	if (stack)
//		return false;
//	else
//		return true;
	return stack==NULL;
}

node* push(node *stack, int value){
	node* newNode = createNode(value);
	if (newNode) {//if newNode is created
		newNode->next = stack;
		stack = newNode;
	}
	return stack;
}
node* pop(node* stack, int* data){
	if (!isEmpty(stack)){
		node* temp = stack;
		stack = temp->next;
		*data = temp->data;
		free(temp);
		return stack;
	}
	else{
		data = NULL;
		return NULL;
	}
}
int* peek(node *stack){
	if (!isEmpty(stack)){
		int *data = (int*)calloc(1,sizeof(int));
		*data = stack->data;
		return data;
	}
	return NULL;
}

int main(){
	node *stack = NULL;
	int *data = (int*)calloc(1,sizeof(int));
	stack = push(stack, 10);
	stack= push(stack, 20);
	stack = pop(stack, data);
	stack = pop(stack, data);
	free(data);
	data = (int*)calloc(1,sizeof(int));
	stack = pop(stack, data);
	stack = pop(stack, data);
	if (data)
		printf("%d", *data);
	else
		printf("Stack is underflow");
	
	return 0;
}