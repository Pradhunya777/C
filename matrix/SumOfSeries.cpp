#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<endl<<"Enter a number = ";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i*i;
        cout<<i*i<<endl;
    }
    cout<<endl<<sum;
 return 0;
}
