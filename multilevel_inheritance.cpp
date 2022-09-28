#include<iostream>
using namespace std;
class base1{
    public:
         int id;
         char name[30];
         void input_name_id(){
           cout<<"enter the id \n enter teh name ";
           cin>>id>>name;
         }
};
class test : public base1{
    public:
          int se,oops,de;
         void get_input(){
            cout<<"enter the marks of se \n enter marks of oops \n enter marks of de";
            cin>>se>>oops>>de;
         }
};
class result : public test{
    public:
    int total;
    int avg;
    void total_avg(){
            total =se + oops + de;
            cout<<" \nthe total of marks of three subject are "<<total<<endl;
            avg=total/3;
            cout<<"the avg is "<<avg<<endl;
    }
   void grade(){
       int per;
       per=(total/300)*100;
       if(per>=90 && per<=100)
       cout<<"Grade A";
       else if(per>=70 && per<90 )
       cout<<"Grade B";
       else if(per<70 && per>=40)
       cout<<"grade C";
       else
       cout<<"fail";
   }
};

int main(){
    result r;
    r.input_name_id();
    r.get_input();
    r.total_avg();
    r.grade();
}


