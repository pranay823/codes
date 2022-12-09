#include<iostream>
using namespace std;
class Salary{
    public:
    Salary(){
        cout<<"salary is 0"<<endl;
    }
    Salary(int x){
        cout<<"Salary is greater  than 2 lakh and salary = "<<x<<endl;
    }
};
int main(){
    int bs,hra,da,total;
    cout<<"Enter base salary , hra , da  : ";
    cin>>bs>>hra>>da;
    total=bs+hra+da;
    try{
        if(total<=0){
            Salary s;
            throw s;  
        }
        
        else if(total>200000){
            Salary x(total);
            throw x;
            
        }
        cout<<"Total salary is "<<total<<endl;
    }
    catch(Salary e){
            cout<<"Exception Handled"<<endl;
        }
}