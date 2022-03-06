#include<stdio.h>
int main(){
   int rev=0,remainder,no;
   printf("\n \t Enter a number to be reverse =");
   scanf("%d",&no);
   while(no!=0){
    remainder= no%10;
    rev=rev*10+remainder;
    no=no/10;

   }
   printf("the reverse number is = %d",rev);
   return 0;
}
