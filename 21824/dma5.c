#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    int rollno;
    char name[20];
};
int main(){
    struct student *s;
    struct student s1 = {102, "Jeyanth"};
    s = (struct student *)malloc(sizeof(struct student));
    s->rollno = 102;
    strcpy(s->name, "Divya");
    return 0;
}