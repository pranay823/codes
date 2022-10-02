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
void insertion_sort(int a[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(temp<a[j] && j>=0){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    }



int main(){
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    int a[n];
    getinput(a,n);
    print(a,n);
    insertion_sort(a,n);
    printf("the sorted array is \n");
    print(a,n);
}