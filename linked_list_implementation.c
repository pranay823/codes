#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;

};
struct node* head;
struct node* first;
struct node* second;
struct node* third;
int main(){
head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head -> data = 1;
head -> next =first;
first ->data=2;
first ->next=second;
second->data=3;
second->next=third;
third->data=4;
third->next=NULL; 
int i;
for(i=0;i<4;i++){
    printf("\nthe element is %d \n",head->data);
    head=head->next;
}
}
