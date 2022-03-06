#include<iostream>
using namespace std;
int main(){
    int a,b,choise;
    float add,sub,mul,div,square,cube;

    cout<<endl<<"\t************Calculator************";
    do{
        cout<<endl<<"\t 1. Addition ";
        cout<<endl<<"\t 2. substraction ";
        cout<<endl<<"\t 3. multiplication ";
        cout<<endl<<"\t 4. division ";
        cout<<endl<<"\t 5. square ";
        cout<<endl<<"\t 6. cube ";
        cout<<endl<<"\t 7. exit ";
        cout<<endl<<"\t Enter choise = ";
        cin>>choise;

    switch(choise){
        case 1:
            cout<<endl<<"Enter two numbers = ";
            cin>>a>>b;
            add=a+b;
            cout<<endl<<"Addition is = "<<add;
            break;
        case 2:
            cout<<endl<<"Enter two numbers = ";
            cin>>a>>b;
            sub=a-b;
            cout<<endl<<"substraction is = "<<sub;
            break;
        case 3:
            cout<<endl<<"Enter two numbers = ";
            cin>>a>>b;
            mul=a*b;
            cout<<endl<<"Multiplication is = "<<mul;
            break;
        case 4:
            cout<<endl<<"Enter two numbers = ";
            cin>>a>>b;
            div=a/b;
            cout<<endl<<"Division is = "<<div;
            break;
        case 5:
            cout<<endl<<"Enter a number = ";
            cin>>a;
            square=a*a;
            cout<<endl<<"Square is = "<<square;
            break;
        case 6:
            cout<<endl<<"Enter a number = ";
            cin>>a;
            cube=a*a*a;
            cout<<endl<<"Cube is = "<<cube;
            break;
        case 7:
            exit(0);


    }
     }while(choise!=7);

    return 0;
}

