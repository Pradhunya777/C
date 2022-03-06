#include<iostream>
using namespace std;
class test{
public:
    void disp(){
        cout<<"These is Test Class ";
    }
  };
class baseone:virtual public test{
public:
    int x=10;
    virtual void disp(){
        cout<<"value of x baseone class =="<<x;
    }
};
class basetwo:virtual public test{
public :
    int z=4;
    virtual void disp(){
        cout<<"value of z basetwo vlass == "<<z;
    }
};
class derived : public baseone,public basetwo{
public:
    int y=5;
};
int main(){
    derived d1=derived();
    test *t1;
    t1=&d1;
    t1->disp();
    return 0;
}
