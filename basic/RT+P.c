//function with parameter returning value.

#include<stdio.h>
#include<conio.h>
int main(){
        int a,b;
    //add(a,b);
    printf("\n enter two numbers=");
    scanf("%d%d",&a,&b);
    printf("\n addition is %d",add(a,b));
}
int add(int a,int b){
    return(a+b);
}
