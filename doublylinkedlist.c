//Doubly linked list demo 
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
//function to add node in the beginning of the list
node* addFirst(node* list, int value){
	node* newNode = createNode(value);
	if(newNode){ //if node created
		if (list){//if list is not NULL
			newNode->nxt = list;
			list->prev = newNode;
			list = newNode;
			return list;
		}
		return newNode;
	}
	return list;
}

void printList(node* list){
	node* temp = list;
	printf("Forward traversal : \n");
	printf("[");
	while(temp && temp->nxt){
		printf("%d,", temp->data);
		temp = temp->nxt;
	}
	temp ? printf("%d]",temp->data):printf("]");
//	if (temp)
//		printf("%d]",temp->data);
//	else
//		printf("]");
	printf("\nReverse traversal : \n");
	printf("[");
	while(temp && temp->prev){
		printf("%d,", temp->data);
		temp = temp->prev;
	}
	temp ? printf("%d]",temp->data):printf("]");
}
//function to add and element in the last of list
node* addLast(node* list, int value){
	node* newNode = createNode(value);
	if(newNode){//if node created
		if(list){//if list is not empty
			node *temp = list;
			while(temp->nxt) temp=temp->nxt;
			temp->nxt = newNode;
			newNode->prev = temp;
			return list;
		}
		return newNode;
	}
	return list;
}
int main(){
	node* root = NULL;
	root = addFirst(root, 10);
	root = addFirst(root, 20);
	root = addFirst(root, 30);
	root = addLast(root, 40);
	printList(root);
	return 0;
}