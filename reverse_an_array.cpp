#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array  :";
    cin>>n;
    int a[n],b[n];
    int s;
    int max=0,min=0;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    cout<<"the elemets are"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"reversing the array"<<endl;
    for(i=0;i<n;i++){
        b[n-1-i]=a[i];
}
for(i=0;i<n;i++){
    cout<<b[i];

}
}