//function with parameter not returning value.

#include<stdio.h>
#include<conio.h>
int main(){
 int a,b;
 printf(" enter first numbers =");
 scanf("%d",&a);
 printf(" enter second numbers =");
 scanf("%d",&b);
 add(a,b);
}
 void add(int a, int b){
    printf("\n Addition is %d ",a+b);
 }
