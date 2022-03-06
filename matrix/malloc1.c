#include<stdio.h>
int main(){
    int *ptr,n=10,i;
    float sum=0,avg=0;
    ptr=(int *)malloc(sizeof(int) *n);
    printf("\n Enter Elements = ");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("\n Entered Elements are = ");
    for(i=0;i<n;i++){
        printf("\n %d",ptr[i]);
        sum+=ptr[i];
    }
    avg=sum/n;
    printf("\n The Summation is %f",sum);
    printf("\n The Avg is %f",avg);
    return 0;
}
