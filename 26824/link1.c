//Program to demonstrate Linked list 
#include <stdio.h>
typedef struct Node{
    int data;
    struct Node *ptr;
}node;

int main(){
    node x, y, z,a;
    x.data = 100;
    y.data = 200;
    z.data = 300;
    a.data = 400;
    a.ptr = &x;
    x.ptr = &z;
    x.ptr->ptr = &y;
    y.ptr = NULL;
    printf("%d", a.ptr->ptr->data);
    
    return 0;
}