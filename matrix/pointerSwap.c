#include<stdio.h>
int main(){
    int no1,no2,swap;
    printf("\n Enter First number = ");
    scanf("%d",&no1);
    printf("\n Enter second number = ");
    scanf("%d",&no2);
    int *ptr1 = &no1;
    int *ptr2 = &no2;
    printf("\n Before swapping nos are a=%d,b=%d",no1,no2);
    swap=no1;
    no1=no2;
    no2=swap;
    printf("\n After swapping nos are a=%d,b=%d",no1,no2);
    return 0;
}
