//Program to demonstrate Linked list 
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data; //4
    struct Node *ptr; // 8
}node;
int main(){
    node *root;
    root = (node *)calloc(1, sizeof(node));
    root->data = 100;
    root->ptr = (node *)calloc(1, sizeof(node));
    root->ptr->data = 200;
    root->ptr->ptr = (node *)calloc(1, sizeof(node));
    root->ptr->ptr->data = 300;
    root->ptr->ptr->ptr = NULL;
    printf("%d", root->ptr->ptr->data);
    return 0;
}                      