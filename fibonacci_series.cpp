#include<iostream>
using namespace std;
void fibonacci(int);

void fibonacci(int n){
    int a=0,b=1,i;
    int next_num= a+b;
    cout<< a << b;
    for(i=2;i<=n;i++){
        cout<<" "<<next_num;
        a=b;
        b=next_num;
        next_num= a + b;
    }
}

int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    fibonacci(n);
}