//Program to implement circular linked list
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

node* deleteFirst(node* tail){
	if (tail){//if list is not empty
		if (tail->nxt == tail){
			free(tail);
			return NULL;
		}
		else{
			node* temp = tail->nxt;
			tail->nxt = temp->nxt;
			temp->nxt->prev = tail;
			free(temp);
		}
		
	}
	return tail;
}
node* deleteLast(node* tail){
	if (tail){//if list is not empty
		if(tail->nxt==tail){//list is having only one element
			free(tail);
			return NULL;
		}else{
			node* temp = tail;
			tail = temp->prev;
			tail->nxt = temp->nxt;
			temp->nxt->prev = tail;
			free(temp);
		}
	}
	return tail;
}
node* deleteAt(node* tail, int position){
	if(tail && position>=0){
		if(position == 0 || position == 1)
			return deleteFirst(tail);
		else if (tail->nxt != tail){
			node* temp = tail->nxt;
			for (int i = 2;i<position && temp!=tail;i++)
				temp = temp->nxt;
			if(temp!=tail){
				node* t = temp->nxt;
				temp->nxt = t->nxt;
				t->nxt->prev = temp;
				tail = temp;
				free(t);
			}
		}
	}
	return tail;
}
int main(){
	node* tail = NULL;
	tail = addBeginning(tail, 10);
	tail = addBeginning(tail, 20);
	tail = addBeginning(tail, 30);
	printList(tail);
//	tail = deleteFirst(tail);
//	tail = deleteFirst(tail);
//	tail = deleteFirst(tail);
//	tail = deleteLast(tail);
//	tail = deleteLast(tail);
//	tail = deleteLast(tail);
//	tail = deleteAt(tail, 1);
//	tail = deleteAt(tail,3);
	tail = deleteAt(tail,5);
	tail = deleteAt(tail,4);	
	printList(tail);
	return 0;
}