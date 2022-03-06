#include<iostream>
using namespace std;

class emp
{
public:
    string name,deptname;
    int sal;

};

int main()
{
    emp e[3];
    int i;
    string dname;
    for(int i=0; i<3; i++)
    {
        cout<<endl<<"Enter employye name =";
        cin>>e[i].name;
        cout<<endl<<"Enter Dept name =";
        cin>>e[i].deptname;
        cout<<endl<<"Enter sallary =";
        cin>>e[i].sal;
    }

    cout<<endl<<"enter dept name to search =";
    cin>>dname;

    for(int i=0; i<3; i++)
    {
        if(e[i].deptname==dname)
        {
            cout<<endl<<"Name = "<<e[i].name<<endl;
            cout<<"Deptname = "<<e[i].deptname<<endl;
            cout<<"sal = "<<e[i].sal<<endl;
        }
    }
    return 0;
}
