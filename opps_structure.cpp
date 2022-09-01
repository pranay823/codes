#include<iostream>
using namespace std;
struct time{
    int hr;
    int min;
    int sec;
};
int second( struct time);
int main(){
     struct time t;
    t.hr = 3;
    t.min = 20;
    t.sec = 60;
    cout<<"the total seconds :"<<second(t);
}
 int second( struct time t){
    return t.hr*3600+t.min*60+t.sec;
 }