#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array  :";
    cin>>n;
    int a[n];
    int s;
    int max=0,min=0;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    cout<<"enter the element to be searched  :";
    cin>>s;
    for(i=0;i<n;i++){
        if(a[i]==s){
            cout<<"the element is present at  : "<<i<<endl;
        }
    }
    if(a[i]!=s){
        cout<<"not present";
    }
}