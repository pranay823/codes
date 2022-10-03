#include<iostream>
#include<stdlib.h>
using namespace std;
class student{
    protected:
    int id;
    char name[30];
    public:
        void input(){
            cout<<"enter the id \n enter the name : \n\n";
            cin>>id>>name;
        }
};
class test1 : public virtual student {
    protected:
    int objective,subjective;
    public:
     void input1(){
        cout<<"enter objective marks \n enter subjective marks \n\n";
        cin>>objective>>subjective;
     }
};
class test2 :public virtual student{
    protected:
    int objective1,subjective1;
    public:
    void input2(){
        cout<<"enter objective marks \n enter subjective marks \n\n";
        cin>>objective1>>subjective1;
    }
};
class result : public test1,public test2{
    private :
    int attendance;
    public :
           void input3(){
            cout<<"enter the attendance \n ";
            cin>>attendance;
           }
           void display(){
            cout<<"the id is  "<<id<<endl<<"the name is "<<name<<endl;
            cout<<"the objective and subjective marks of class test1 :\n"<<objective<<endl<<subjective<<endl;
            cout<<"the objective and subjective marks of class test2 :\n"<<objective1<<endl<<subjective1<<endl;
            cout<<"the attendance is \n"<<attendance<<endl;
           }
           void best_of_objective(){
            cout<<"the best of objective marks is :"<< max(objective,objective1)<<endl;
            cout<<"the best of subjective marks is :"<<max(subjective,subjective1)<<endl;
           }
};
int main(){
    result r;
    r.input();
    r.input1();
    r.input2();
    r.input3();
    r.display();
    r.best_of_objective();
}