#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;

};
void insertion_at_beginning(struct node* head){
    int i,n;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("to insert the node at beginning \n");
    printf("the value to be added \n");
    scanf("%d",&n);
    temp->data=n;
    temp->next=head;
    head=temp;
    printf("node inserted \n");
    for(i=0;i<5;i++){
    printf(" \n the element is %d \n",head->data);
    head=head->next;
}
}

void insertion_at_last(struct node* head){
    int n,i;
   struct node* p;
   struct node* temp;
  temp=(struct node*)malloc(sizeof(struct node));
  p=head;
   for(i=0;p->next!=NULL;i++){
       p=p->next;
   }
   if(p->next==NULL){
    printf("to insert the node at last \n");
    printf("the value to be added \n");
    scanf("%d",&n);
    temp->data=n;
    p->next=temp;
    temp->next=NULL;
    for(i=0;i<5;i++){
    printf(" \n the element is %d \n",head->data);
    head=head->next;
    } 
 }}
void insertion_at_random(struct node* head){
    int n,i,d;
   struct node* p;
   struct node* temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("to insert the node at random \n");
  printf("the node to be insertes after that \n");
  scanf("%d",&d);
  p=head;
  for(i=0;p->data!=d;i++){
    p=p->next;
  }
    printf("the value to be added \n");
    scanf("%d",&n);
    temp->data=n;
  temp->next=p->next;
    p->next=temp;
    for(i=0;i<5;i++){
    printf(" \n the element is %d \n",head->data);
    head=head->next;

}}
    

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
insertion_at_beginning(head);
insertion_at_last(head);
insertion_at_random(head);

}