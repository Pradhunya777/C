#include<stdio.h>
int main(){
   int sum=0,remainder,no,temp;
   printf("\n \t Enter a number to check palindrome =");
   scanf("%d",&no);
   temp=no;
   while(no>0){
    remainder= no%10;
    sum=sum*10+remainder;
    no=no/10;
   }
   if(temp==sum){
   printf("the number is palindrome %d",temp);
   }
   else{
     printf("the number is not palindrome %d",temp);
   }
   return 0;
}
