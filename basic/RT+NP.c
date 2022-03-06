//function without parameter returning value.

#include<stdio.h>
#include<conio.h>
int main(){

 printf("addition is %d",add());
}
int add(){
    int a,b;
    printf("\n eter two numbers");
    scanf("%d%d",&a,&b);
    return(a+b);
}
