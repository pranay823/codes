#include<stdio.h>


void getinput(int a[], int n){
    printf("enter array elements \n ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void print(int a[], int n){
    printf("the elements are \n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
void bubble_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
            }
        }
    }
}



int main(){
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    int a[n];
    getinput(a,n);
    print(a,n);
    bubble_sort(a,n);
    printf("the sorted array is \n");
    print(a,n);
}