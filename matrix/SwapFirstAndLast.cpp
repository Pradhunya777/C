#include<iostream>
using namespace std;
int main(){
     int a[6]={1,0,5,7,9},temp;
     for(int i=0;i<5;i++){
        cout<<endl<<"The number is "<<a[i];}
        cout<<endl<<endl;
        cout<<"After swaping First element with last element is";
        cout<<endl;
      temp=a[0];
      a[0]=a[4];
      a[4]=a[0];
        for(int i=0;i<5;i++){
        cout<<endl<<"The number is "<<a[i];
        }


     return 0;
}
