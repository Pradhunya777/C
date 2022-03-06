#include<stdio.h>
int main(){
    int n,i,*ptr;
    float sum=0,avg=0;
    printf("\n Enter the N value");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int) *n);
    if(ptr==NULL){
        printf("\n Memory not allocated");
    }
    else{
        printf("\n Memory allocated %d \n",sizeof(ptr));
    }
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("\n %d",ptr[i]);
        sum+=ptr[i];
    }
    avg=sum/n;
    printf("\n Addition is %f",sum);
    printf("\n avg is %f",avg);
    return 0;
}

