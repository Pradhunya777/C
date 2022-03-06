#include<stdio.h>
int main(){
    int no1=10;
    int *ptr = &no1;
    printf("\n\t value of no1 is %d",no1);
    printf("\n\t address of no1 is %d",&no1);
    printf("\n\t value of ptr is %d",ptr);
    printf("\n\t value of no1 is %d",*ptr);
    printf("\n\t value of ptr is %d",&ptr);
    return 0;
}
