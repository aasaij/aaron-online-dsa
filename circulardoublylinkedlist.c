//Program to implement circular linked lis
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
	struct Node *prev;
	int data;
	struct Node *nxt;
}node;
node* createNode(int value){
	node* newNode = (node*)calloc(1, sizeof(node));
	newNode->data = value;	
	return newNode;
}
node* addBeginning(node* tail, int element){
	node* temp = createNode(element);
	if(tail){
		tail->nxt->prev = temp;
		temp->nxt = tail->nxt;
		temp->prev = tail;
		tail->nxt = temp;
		return tail;
	}
	temp->nxt = temp->prev = temp;
	return temp;
}
void printList(node* tail){
	if (!tail){// if tail is empty
		printf("\n[]\n");
	}
	else{
		printf("\n[");
		node* first = tail->nxt;
		while(first!=tail){
			printf("%d,", first->data);
			first = first->nxt;
		}
		printf("%d]", first->data);
	}
}

int main(){
	node* tail = NULL;
	tail = addBeginning(tail, 10);
	tail = addBeginning(tail, 20);
	tail = addBeginning(tail, 30);
	printList(tail);
	return 0;
}