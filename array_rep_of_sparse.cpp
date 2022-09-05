#include<iostream>
using namespace std;
int main(){
    int m,n,i,j;
    cout<<"enter the size of matrix  :"<<endl;
    cin>>m>>n;
    int a[m][n],c=0;
    int row=0,column=0,num=0;
    cout<<"enter elements :"<<endl;
    for(i=0;i<m;i++){

        for(j=0;j<n;j++){

            cin>>a[i][j];
            if(a[i][j]==0)
            {
                c++;
            }
        }
    }
if(c>(m*n)/2)
cout<<"sparse matrix"<<endl;
else
cout<<"not sparse matrix "<<endl;

cout<<" row "<<" column "<<" number "<<endl;
for(i=0;i<m;i++){

    for(j=0;j<n;j++)
    {
        if(a[i][j]!=0){
            cout<<"     "<<i<<"      "<<j<<"     "<< a[i][j];
            row++;
            column++;
            num++;
            cout<<endl;
            }
    }
    }
    cout<<"-------------------------------"<<endl;
    cout<<"total"<<" "<<row<<"   "<<column<<"    "<<"  "<<num<<endl;



}
