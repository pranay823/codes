#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void show();

#define MAX 10
int stack[MAX];
int top=-1;

int main(){
    int ch,num;
    do{
    printf("enter :\n\t 1.push_element \n");
    printf("\t 2.p element \n ");
    printf("\t 3.show element \n");
    printf("\t Exit \n");
    printf("enter your choice  :");
    scanf("%d",&ch);
    switch(ch){

        case 1 : { printf("entet the number  :");
                scanf("%d",&num);
                push(num);
                 break;}

        case 2 :  pop();
                 break;

        case 3 :  show();
                  break;

        case 4 : exit(0);
                 

        default : printf("invalid input \n");
    }
    }while(1);
}

void push(int num){
   if(top==MAX-1){
    printf("the stack is full \n");
    return ;
   }
   top++;
   stack[top]=num;
   
   printf("the element is added \n");
}
void pop(){
    int x;
  if(top==-1){
    printf("the stack is emptyˀˀ\n");
    return ;
  }
  x=stack[top];
  top--;
  printf("the element is removed \n");
}
void show(){
    int ptr=top;
    if(top==-1){
        printf("the stack is empty \n");
        return;
    }
while(ptr!=-1){
    printf("%d \n",stack[ptr]);
    ptr--;
    }
   
}

