#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number  :";
    cin>>n;
    int a[n],i,b[n];
    cout<<"enter the elements :"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
        
    }
    cout<<"the elements are  :";
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
        }
    cout<<"the swaping of alternate elements "<<endl;
    for(i=0;i<(n-1);i++){
        if(i%2==0){
         swap(a[i],a[i+1]);
        }
    
    }
    //if(n%2!=0)//
    //cout<<a[n-1];//

        cout<<"the swap elements are  :"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
        }
    
        
    
}
  /*  cout<<"the swapped elements are";
    for(i=0;i<n;i++){
        
    }


}*/
