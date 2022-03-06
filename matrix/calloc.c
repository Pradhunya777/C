#include<stdio.h>
int main(){
    int n,*ptr,i;
    float avg=0,sum=0;
    printf("\n Enter the N value = ");
    scanf("\n %d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("\n Memory not allocated");
    }
    else{
        printf("\n Memory is allocated %d",sizeof(ptr));
    }
    printf("\n Enter Elements = ");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("\n Entered elements are ");
    for(i=0;i<n;i++){
        printf("\n %d",ptr[i]);
        sum+=ptr[i];
    }
    avg=sum/n;
    printf("\n Sum is %f",sum);
    printf("\n Average is %f",avg);
    return 0;
}
