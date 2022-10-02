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
void selection_sort(int a[],int n){
    int loc,temp,i,j,min;
    for(i=0;i<n-1;i++){
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                loc=j;
            }
        }
        temp=a[loc];
        a[loc]=a[i];
        a[i]=temp;
    }
}   

int main(){
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    int a[n];
    getinput(a,n);
    print(a,n);
    selection_sort(a,n);
    printf("the sorted array is \n");
    print(a,n);
}