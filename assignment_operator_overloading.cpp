#include<iostream>
using namespace std;

class assign{
 int a ;
 public :
       assign(){
        a=5;
       }
      void display(){
        cout<<a<<endl;
       }
     assign operator =(assign t){
        assign a1;
        a1.a=t.a;
        return a1;
     }
};

int main(){
    assign s1,s2;
    s1.display();
    s2=s1;
    s2.display();
}