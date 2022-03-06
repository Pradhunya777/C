#include<iostream>
using namespace std;

class bank{
public:
    string name;
    string state;
    int pincode;
    string street;
    string email;


    bank(int arr[i])
    {
        cout<<"\n Enter bank information = ";
        for(int i=0; i<2; i++)
        {
            cout<<"Enter Bank Name =";
            cin>>arr[i].name;
            cout<<"Enter state =";
            cin>>arr[i].state;
            cout<<"Enter pincode =";
            cin>>arr[i].pincode;
            cout<<"Enter street =";
            cin>>arr[i].street;
            cout<<"Enter email =";
            cin>>arr[i].email;
        }
        for(int i=0; i<2; i++)
        {
            cout<<"State is = ";
            cout<<state<<endl;
            cout<<"Pincode is = ";
            cout<<pincode<<endl;

        }
    }

};

int main()
{
   bank arr[2];


    return 0;
}
