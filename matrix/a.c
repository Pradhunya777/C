#include<iostream>
using namespace std;
float convertKMTM(float km){
        return km*0.27778;
}
float convertMTH(float miles){
        return miles*3.6;
}

int main(){
    float km,c,miles,m;
    cout<<endl<<"Enter km to convert in miles/hour =";
    cin>>km;
    cout<<endl<<"Enter miles to convert into kilometers =";
    cin>>miles;
    c=convertKMTM(km);
    cout<<endl<<"conversion of km/h to miles/h is ="<<c;
    m=convertKMTM(km);
    cout<<endl<<"conversion of miles/h to km/h is ="<<m;

    return 0;
}

