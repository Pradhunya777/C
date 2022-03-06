#include<stdio.h>
struct student{
    int rollno;
}s;
void setrollno(int rollno1){
    s.rollno=rollno1;
}
int getrollno(){
    return s.rollno;
}

int main(){
    setrollno(2);
    printf("\n %d",getrollno);
    return 0;
}
