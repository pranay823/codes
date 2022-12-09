#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int queue[MAX];
int front=-1;
int rear=-1;

void enque(ele){
if(rear==MAX-1){
 printf("overflow \n");
}

else if(front== -1 && rear == -1){
   rear = 0;
   front = 0;
   queue[rear]=ele;
}


else{
  rear++;
  queue[rear]=ele;
  printf("the element is inserted \n");
}
}

void deque(){
    int val;
    if(front==-1 || front>rear){
        printf("underflow \n");
    }
    else{
       val= queue[front];
       front++;
       printf("the element %d is deleted \n",val);
    }
}

void display(){
    if(front==-1 || front>rear){
        printf("the queue is empty \n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf(" |%d| ",queue[i]);
        }
    }
}

int main(){

int option ;
do{
    printf("\n----------main menu-------------\n");
    printf("\n 1.) insert the element \n");
    printf("\n 2.) delete the element \n");
    printf("\n 3.) display queue \n");
    printf("\n 4.) exit \n");
    printf("\n enter your option  : ");
    scanf("%d",&option);

    switch(option){

        case 1 : {
             int ele;
             printf("\n enter the element   :");
              scanf("%d",&ele);
                 enque(ele);
                 break;
                 }
        case 2 : {
                  deque();
                  break;
                 }
       case 3 : {
                display();
                break;
                }
       case 4 : 
              exit(0);
              break;
       default : 
               printf("\n the option is invalid \n");

    }
}while(option!=4);
}
