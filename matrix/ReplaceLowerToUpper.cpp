#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[30];
    cout<<endl<<"Enter the string in lower case = ";
    cin>>s;
    for(int i=0;i<=strlen(s);i++){
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
    }
    cout<<"the uppercase string is "<<s;

    return 0;
}

