#include<stdio.h>
#include<stdlib.h>


void getinput(int a[], int n){
    printf("enter array elements \n ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void print(int a[], int n){
    printf("the elements are \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
} 

int partition(int a[],int low ,int high){
    int temp,pivot,i,j;
    pivot=a[low];
    i=low+1;
    j=high;
    do{
    while(a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }while(i<j);
   
   temp=a[low];
   a[low]=a[j];
   a[j]=temp;
   return j;
}


void quick_sort(int a[],int low ,int high){
    if(low<high){
    int partition_index = partition( a,low,high);
    print(a,10);
    quick_sort(a,low ,partition_index -1);
    quick_sort(a,partition_index+1,high);
    }
}

int main(){
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    int a[n];
    getinput(a,n);
    print(a,n);
    quick_sort(a,0,n-1);
    print(a,n);
}