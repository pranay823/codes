#include<iostream>
using namespace std;
void array_assign(int);

void array_assign(int n){
    int i,a[n];
for(i=0;i<=(n-1);i++){

    a[i]=1;
    cout<<"the value is _  "<<a[i]<<endl;
}
}
int main(){
    int n;
    cout<<"enter the number  :";
    cin>>n;
    array_assign(n);

}
