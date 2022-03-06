#include<stdio.h>
#include<conio.h>
int main(){
    int array[5],i,total=0,count=1;
    float avg=0;
    printf("\n\t Enter array elements ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        total=total+array[i];
    }
    printf("\n\t Entered array elemente ");
    for(i=0;i<5;i++){
        printf("\n\t the value is %d",array[i]);
    }
    printf("\n\n\t odd even check is\n");
    for(i=0;i<5;i++){
    if(array[i]%2==0){
            if(count==1){
            printf(" Number is Even = %d",array[i]);

            }
            else{
                 printf(" , %d",array[i]);
            }   count++;
        }
        else{
            printf("Number is odd = %d",array[i]);
        }
    }
    printf("\n\t total is %d ",total);
    avg=total/5;
    printf("\n\t average is %f",avg);
    return 0;
}
