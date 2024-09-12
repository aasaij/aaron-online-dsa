//Program to demonstrate Linked list 
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data; //4
    struct Node *ptr; // 8
}node;

node* createNode(int value){
	node* temp = (node *)calloc(1, sizeof(node));
	temp->data = value;
	return temp;
}

int main(){
    node *root;
    root = createNode(100);
    root->ptr = createNode(200);
    root->ptr->ptr = createNode(300);
    root->ptr->ptr->ptr = createNode(400);
    printf("%d", root->ptr->ptr->ptr->data);
    return 0;
}