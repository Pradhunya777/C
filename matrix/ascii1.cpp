#include<iostream>
#include<string.h>

using namespace std;
int main(){
        char c[100],n;
        int p;
        cout<<"Enter string to find ASCII value =";
        cin>>c;
        cout<<"Enter one by one character of string =";
        //p=strlen(c);

        for(int i=0;i<strlen(c);i++)
        {
            cin>>c[i];
        }
        for(int i=0;i<strlen(c);i++)
        {
            cout<<endl<<"ASCII value of "<< c[i] <<" is : "<<(int)c[i];
        }
            return 0;
}
