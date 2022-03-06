#include<iostream>
using namespace std;
class base1{
    public :
    void display(){
        cout<<"pradhunya shewale";
    }
};
class base2{
public:
    void display(){
        cout<<"shubham shewale";
    }
};
class derived : public base1,public base2{
public :
    void display(){
        cout<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
};
int main(){
    derived d = derived();
    derived *b;
    b=&d;
    b->display();
    return 0;
}
