#include<stdio.h>
int main(){
   int no,temp,rem,temp2=0;
   printf("\n \t Enter a number to check armstrong =");
   scanf("%d",&no);
   temp=no;
   while(temp!=0){
    rem= temp%10;
    temp2+=rem*rem*rem;
    temp=temp/10;
   }
   if(temp2==no){
   printf("the number is armstrong ",no);
   }
   else{
     printf("the number is not armstrong ",no);
   }
   return 0;
}
