#include<iostream>
using namespace std;
bool  even_odd(int);

bool  even_odd(int n){
    if(n%2==0){
        return 1 ;
    }
    
    return 0;
        
}
int main(){
    int n;
    cout<<"enter the number  :";
    cin>>n;
    int ans;
    ans=even_odd(n);
    cout<<"the number "<< n <<" is "<<ans;



}