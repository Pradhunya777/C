#include<stdio.h>
int main(){
    int no1,no2,sum;
    printf("\n Enter First number = ");
    scanf("%d",&no1);
    printf("\n Enter second number = ");
    scanf("%d",&no2);
    int *ptr1 = &no1;
    int *ptr2 = &no2;
    sum=*ptr1+*ptr2;
    printf("\n Addition is %d",sum);
    return 0;
}
