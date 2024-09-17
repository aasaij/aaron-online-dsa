//Program to implement stack using array
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Definiting the structure of Stack
typedef struct Stack {
	int capacity;
	int size;
	char *elements;
}stack;
//Creating stack with <capacity> size
stack* createStack(int capacity){
	stack* temp = (stack*)calloc(1,sizeof(stack));
	temp->capacity = capacity;
	temp->size = -1; //initial size is -1 that means its empty
	temp->elements = (char *)calloc(capacity, sizeof(char));
	return temp;
}
//function to check whether the stack is empty or not
bool isEmpty(stack *s){
//	if (s->size == -1)
//		return true;
//	else
//		return false;
//	return s->size == -1?true:false;
	return s->size == -1;
}
//function to check whether the stack is full or not
bool isFull(stack *s){
	return (s->size + 1) == s->capacity;
}
//function to push an element into the stack.
//return true if the element is pushed otherwise false
bool push(stack *s, char element){
	if (isFull(s))
		return false;

	s->size++;
	s->elements[s->size] = element;	
	return true;
}
//function to remove top elements from the stack
//returns the element if the stack is not empty otherwise returns NULL
char *pop(stack *s){
	if (isEmpty(s)){
		return NULL;
	}
	return &(s->elements[s->size--]);
//	char element = s->elements[s->size];
//	s->size--;
//	return &element;
}
//function to return the top element of stack
//returns the element if the stack is not empty otherwise returns NULL
char *peek(stack *s){
	if (isEmpty(s)){
		return NULL;
	}
	return &(s->elements[s->size]);
//	char element = s->elements[s->size];
//	s->size--;
//	return &element;
}
int main(){
	stack *s = NULL;
	int n, choice;
	printf("Stack Size : ");
	scanf("%d", &n);
	s = createStack(n);
	while (1){
		char element;
		printf("\nStack Operations");
		printf("\n================");
		printf("\n1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		switch(choice){
			default: // except 1,2,3
				printf("Thank you sooo much...!");
				return 0;
			case 1: //push operation
				printf("Enter an element : ");
				scanf("\n%c", &element);
				if (push(s, element))
					printf("Added!");
				else
					printf("Stack is full!");
				break;
			case 2:{
				char *element = pop(s);
				if (element)
					printf("'%c' is popped!", *element);
				else
					printf("Stack is empty");
				break;
			}
			case 3:{
				char *element = peek(s);
				if (element)
					printf("'%c' is top element!", *element);
				else
					printf("Stack is empty");
			}
		}
	}
	return 0;
}
//Stack Operations
//================
//1. Push
//2. Pop
//3. Peek
//4. Exit
//
//Enter your choice : 1
//Enter the element : 7
//true Element is added
//false Stack is full!






