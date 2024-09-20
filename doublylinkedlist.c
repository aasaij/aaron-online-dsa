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
	printf("\nForward traversal : \n");
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
//function to delete first element of the list
node* deleteFirst(node* list){
	if(list){//if list is not empty 
		node* temp = list;
		list = temp->nxt;
		if (list){//if list is having more than one element
			list->prev = NULL;
		}
		free(temp);		
	}
	return list;
}
//function to delete the last element in the list
node* deleteLast(node* list){
	if(list){//if list is not empty
		if (!list->nxt) //if list is having only one element
			return deleteFirst(list);
		node* temp = list;
		//list is having more than one element
		while(temp->nxt->nxt) temp = temp->nxt;
		node *t = temp->nxt;
		temp->nxt = NULL;
		free(t);
	}
	return list;
}
//function to delete an element in the specified position
node* deleteAt(node* list, int position){
	if(position>=0&&list){
		if (position==0 || position == 1)
			return deleteFirst(list);
		node* temp = list;
		for(int i = 2; i<position && temp->nxt; i++) temp = temp->nxt;
		if (temp->nxt){
			node *t = temp->nxt;
			temp->nxt = t->nxt;
			if(t->nxt)
				t->nxt->prev = temp;
			free(t);			
		}	
	}
	return list;
}
int main(){
	node* root = NULL;
//	root = addFirst(root, 10);
//	root = addFirst(root, 20);
//	root = addFirst(root, 30);
//	root = addLast(root, 40);
	printList(root);
//	root = deleteFirst(root);
//	root = deleteLast(root);
	root = deleteAt(root, 2);
	printList(root);
	return 0;
}