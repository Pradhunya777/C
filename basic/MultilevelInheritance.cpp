#include<iostream>
using namespace std;

class student{
public:
    int  rollno;
    string name;
    string course;

    void fillstudent();
    void displaystudent();
};
 student :: fillstudent(){
    cout<<"\n Enter student rollno = ";
    cin>>rollno;
    cout<<"\n Enter student name = ";
    cin>>name;
    cout<<"\n Enter student course = ";
    cin>>course;
}
void student :: displaystudent(){
    cout<<"Stuednt rollno is = "<<rollno;
    cout<<"Student name is = "<<name;
    cout<<"Student course is ="<<course;
}


class internalmarks : public student{
public:
    float maths;
    float eng;
    float sci;

    void fillmarks();
    void displaymarks();
};
void internalmarks :: fillmarks(){
    cout<<"\n Enter maths marks =";
    cin>>maths;
    cout<<"\n Enter English marks =";
    cin>>eng;
    cout<<"\n Enter science marks =";
    cin>>sci;
}
void internalmarks :: displaymarks(){
    cout<<"\n Internal marks of maths is = "<<maths;
    cout<<"\n Internal marks of English is = "<<eng;
    cout<<"\n Internal marks of Science is = "<<sci;
}


class externalmarks : public student,public internalmarks{
public:
    float mathsex;
    float engex;
    float sciex;

    void fillmarksex();
    void displaymarksex();
};
void externalmarks :: fillmarksex(){
    cout<<"\n Enter External  maths marks =";
    cin>>mathsex;
    cout<<"\n Enter External English marks =";
    cin>>engex;
    cout<<"\n Enter External science marks =";
    cin>>sciex;
}
void externalmarks :: displaymarksex(){
    cout<<"\n external marks of maths is = "<<mathsex;
    cout<<"\n external marks of English is = "<<engex;
    cout<<"\n external marks of Science is = "<<sciex;
}

/*class calculate : public student , public externalmarks{
public:
    void displayall(){
        fillstudent();
        fillmarks();
        fillmarksex();
    }
};*/

int main(){
    externalmarks e;
    //c.displayall();
    e.fillstudent();
    e.fillmarks();
    e.fillmarksex();
    e.displaystudent();
    e.displaymarks();
    e.displaymarksex();
    return 0;
}
