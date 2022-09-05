#include<iostream>
using namespace std;
int main(){
    int m,n,i,j;
    cout<<"enter the no of rows and digits   :";
    cin>>m>>n;
    int a[m][n],b[m][n],sum[m][n];
    cout<<"enter the elements of 1 matrix"<<endl;
    for(i=0;i<m;i++){

        for(j=0;j<n;j++){

            cin>>a[i][j];
        }
    }
    cout<<"enter elements of 2 matrix"<<endl;
    for(i=0;i<m;i++){
         
         for(j=0;j<n;j++){

            cin>>b[i][j];
         }
    }
      for(i=0;i<m;i++){
         
         for(j=0;j<n;j++){

            sum[i][j]=a[i][j] + b[i][j] ;
         }}
         cout<<"the sum is "<<endl;

      for(i=0;i<m;i++){
         
         for(j=0;j<n;j++){

         cout<<" "<<sum[i][j];
         }
         cout<<endl;
         }
}