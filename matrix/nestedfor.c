#include<stdio.h>
int main(){
    int n,i,j;
    printf("\n\t enter the n value");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("\n");
        for(j=0;j<n;j++){
            if(i>=j){
                printf("*");
            }
        }
    }
   for(i=1;i<n;i++){
            printf("\n");
        for(j=0;j<n;j++){
            if(i<=j){
                printf("*");
            }
        }

    }
    return 0;
}
