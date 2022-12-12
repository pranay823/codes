#include<iostream>
using namespace std;

class Sample{
  public : 
        Sample(){
            cout<<"your salary is less the 0 or equal to 0 "<<endl;
        }
        Sample(int total){
         cout<<"your salary is greater than 200000"<<endl;
        }

};

int main(){
    int bs,hra,da;
    cout<<"enter the value of base salary , hra and da  : "<<endl;
    cin>>bs>>hra>>da;
    int total = bs + hra + da;
    try{
        if(total<=0){
            Sample s;
            throw s;
        }
        if(total>=200000){
            Sample s(total);
            throw s;
        }
        cout<<"your salary is :"<<total<<endl;
    }
    catch(Sample s){
        cout<<"salary is :"<<total;
    }
}

