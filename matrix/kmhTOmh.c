#include<iostream>
using namespace std;
void convert(km){
        return km*0.27778;
}

int main(){
    float km;
    cout<<"Enter km to convert in miles/hour =";
    cin>>km;
    c=convert(km);
    cout<<"conversion of km/h to miles/h is ="<<c;
    return 0;
}

