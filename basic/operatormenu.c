#include<stdio.h>
int main(){
  int a,b,result;
  char choise;

  printf("\n Enter + for addition ");
  printf("\n Enter - for addition ");
  printf("\n Enter * for addition ");
  printf("\n Enter / for addition s");
  printf("\n Enter the choise =");
  scanf("%s",&choise);
  switch(choise){
  case '+':
       printf("\n enter the first number =");
       scanf("%d",&a);
       printf("\n enter the second number =");
       scanf("%d",&b);
       result=a+b;
       printf("\n addition is %d ",result);
       break;
  case '-':
       printf("\n enter the first number =");
       scanf("%d",&a);
       printf("\n enter the second number =");
       scanf("%d",&b);
       result=a-b;
       printf("\n substraction is %d ",result);
       break;
   case '*':
       printf("\n enter the first number =");
       scanf("%d",&a);
       printf("\n enter the second number =");
       scanf("%d",&b);
       result=a*b;
       printf("\n multiplication is %d ",result);
       break;
   case '/':
       printf("\n enter the first number =");
       scanf("%d",&a);
       printf("\n enter the second number =");
       scanf("%d",&b);
       result=a/b;
       printf("\n division is %d ",result);
       break;
  }
}
