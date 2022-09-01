#include<iostream>
using namespace std;
int factorial(int);
int nCr(int,int);

int  factorial(int n){
    int f=1,i;
    for(i=2;i<=n;i++)
    {
        f=f*i;   
    }
    return f;

 }

int nCr(int n,int r){
    int ans,num;
    num=factorial(n);
    ans=num/(factorial(r) * factorial(n-r));
    return ans;
}



int main(){
    int n ,r,num=0,ans;
    cout<<"enter the value of n and r";
    cin>>n>>r;
    cout<<"the ans is  :"<<nCr(n,r)<<endl;
}