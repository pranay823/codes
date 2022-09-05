#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array  :";
    cin>>n;
    int a[n];
    int max=0,min=0;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    min=INT16_MAX;
    max=INT16_MIN;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"the max number is "<<max<<endl;
    cout<<"the min number is "<<min<<endl;


}