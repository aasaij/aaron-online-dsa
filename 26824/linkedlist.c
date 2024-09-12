//Program to demonstrate linkedlist 
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *nxt;
}node;
//function to create a new node
node *createNode(int value){
	node *temp = (node *)calloc(1, sizeof(node));
	if (temp) // temp is not NULL
		temp->data = value;
	return temp;
}
//function to count the number of nodes in the list
int length(node *list){
	int i;
	node *temp = list;
	for (i=1; temp;i++)
		temp = temp->nxt;
	return --i;
}
//function to append a node in the end
node *append(node *list, int key){
	node *temp = createNode(key);
	if (list){
		node *t = list;
		while (t->nxt) t = t->nxt;
		t->nxt = temp;
		return list;
	}
	else
		return temp;	
}
//function to append a node in the beginning
node *insertAtBegin(node *list, int key){
	node *temp = createNode(key);
	if (temp){
		temp->nxt = list;
		list = temp;
	}
	return list;
}
node *insertAt(node *list, int position, int key){
	if (position <=1)
		return insertAtBegin(list, key);
	else if (position > length(list) )
		return append(list, key);
	else{
		node* temp = createNode(key);
		node *t = list;
		for (int i = 2;i<position;i++)
			t= t->nxt;
		if (temp){
			temp->nxt = t->nxt;
			t->nxt = temp;
		}
		return list;
	}
}

void printList(node *list){
	node *temp = list;
	if(temp!=NULL){ // list is not empty
		printf("\n[");
		while (temp->nxt!=NULL){
			printf("%d, ", temp->data);
			temp = temp->nxt;
		}
		printf("%d]\n",temp->data);
	}	
}
int main(){
	node *root = NULL;
	root = insertAtBegin(root, 10);
	root = insertAtBegin(root, 20);
	root = insertAtBegin(root, 30);
	root = append(root, 40);
	root = append(root, 50);
	root = insertAt(root,5,45);
	root = insertAt(root,0,5);
	root = insertAt(root,1,3);
	root = insertAt(root,15,450);
//	for (int i = 1; i<=10; i++)
//		root = insertAtBegin(root, i);
	printList(root);
	printf("%d", length(root));
	return 0;
}