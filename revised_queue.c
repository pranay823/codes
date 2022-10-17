#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int s[MAX];
 int rear=-1 , front=-1;
 
void insert(int s[],int n){
front=0;
if(rear==MAX-1){
printf(" \n queue over flow \n ");

}
else {
    int ele;
    printf("\n enter the number to be inserted \n");
    scanf("%d",&ele);
    rear++;
    s[rear]=ele;
   }


}

void delete(int s[],int n){
if(front==-1&& rear==-1)
printf("\n queue under flow \n");

else if(front>rear)
printf("element cannot be deleted \n");


else{
   printf(" \nthe deleted element is %d\n",s[front]);
  front++;
   printf("\n the element is deleted sucessfully \n");
}
}

void display( int s[],int n){
int i;
printf("\n the elements are \n");
for(i=front;i<=rear;i++){
printf("%d",s[i]);
}
}

int main(){
int n;
printf("enter the size of stack \n");
scanf("%d",&n);
int ch;
do{
printf("\n\n------------main menu-------------\n\n");
printf("\n\n 1. insert \n");
printf("\n\n 2. delete \n");
printf("\n\n 3. display \n");
printf("\n\n 4. exit \n");


printf("\n enter the choice \n");
scanf("%d",&ch);
switch(ch){

case 1 : {
          
           insert(s,n);
           break;
         }

case 2 : delete(s,n);
         break;

case 3 : display(s,n);
         break;

case 4 : exit(0);
         break;

default : printf("invalid \n");

}
}while(ch!=4); 

}
