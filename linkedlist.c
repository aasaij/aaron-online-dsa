//Program to demonstrate linkedlist 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
//function to delete first node
node* deleteFirstNode(node* list){
	if (list) { //list is not null
		node *temp = list;
		list = temp->nxt;
		free(temp);
	}
	return list;
}
//function to delete the last node
node* deleteLastNode(node* list){
	if (list){ //list is not empty
		if (list->nxt==NULL){//checking whether list is having one node or not
			return deleteFirstNode(list); //it is having only one
		}
		//List is having more than one node
		node* temp = list;
		//moving the pointer to refer the last but second node
		while(temp->nxt->nxt){
			temp = temp->nxt;
		}
		//assigning a pointer to refer the last node
		node *t = temp->nxt;
		//assigning NULL pointer to last but second node
		temp->nxt = NULL;
		//deleting the last node		
		free(t);
	}
	return list;	
}
node* deleteAt(node* list, int position){
	if (position == 1 || position == 0)
		return deleteFirstNode(list);
	node *temp = list;
	for (int i = 2; i<position && temp;i++)
		temp = temp->nxt;
	if (temp){
		node *t = temp->nxt;
		if (t){
			temp->nxt = t->nxt;
			free(t);
		}
	}
	return list;	
}
//Print the list using iteration
//void printList(node *list){
//	node *temp = list;
//	if(temp!=NULL){ // list is not empty
//		printf("\n[");
//		while (temp->nxt!=NULL){
//			printf("%d, ", temp->data);
//			temp = temp->nxt;
//		}
//		printf("%d]\n",temp->data);
//	}	
//	else{
//		printf("[]");
//	}
//}
//Printing the list using recursive
void printList(node *list){
	if(list->nxt){
		printf("%d, ", list->data);
		printList(list->nxt);
	}
	else{
		printf("%d\n", list->data);
	}
}
//Printing the list in reverse order
void reverseList(node* list){
	if (list){
		reverseList(list->nxt);
		printf("%d ", list->data);
	}
}
//Finding an element in given linked list
bool find(node* list, int searchElement){
	for (node *temp = list; temp!=NULL;temp=temp->nxt){
		if (temp->data == searchElement)
			return true;
	}
	return false;
}
int main(){
	node *root = NULL;
	root = insertAtBegin(root, 10);
	root = insertAtBegin(root, 20);
	root = insertAtBegin(root, 30);
	root = append(root, 40);
	root = append(root, 50);
//	root = insertAt(root,5,45);
//	root = insertAt(root,0,5);
//	root = insertAt(root,1,3);
//	root = insertAt(root,15,450);
//	for (int i = 1; i<=10; i++)
//		root = insertAtBegin(root, i);
//	printList(root);
//	printf("%d", length(root));
//	root = deleteFirstNode(root);
//	root = deleteLastNode(root);
	//printList(root);
//	root = deleteAt(root, 5);
//	root = deleteAt(root, 7);
	//printList(root);
//	root = deleteAt(root, 2);
//	root = deleteAt(root, 2);
//	root = deleteAt(root, 1);
	printList(root);
//	reverseList(root);
	int search = 40;
	if (find(root, search))
		printf("%d Found!", search);
	else
		printf("%d Not Found!", search);
	return 0;
}