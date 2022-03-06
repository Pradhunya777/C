#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int ch,pi=3.14,h,r,s;
    float c;
    printf("\n \t ********* Volume Of Different Object **********\n ");
    do{
        printf("\n \t 1.> Volume of cylinder. ");
        printf("\n \t 2.> Volume of cone. ");
        printf("\n \t 3.> Volume of speare. ");
        printf("\n \t 4.> Volume of cube. ");
        printf("\n \t 5.> Exit. ");
        printf("\n\n \t Enter choise = ");
        scanf("%d",&ch);

    switch(ch){
        case 1:printf("\n\t Enter radius = ");
               scanf("%d",&r);
               printf("\n\t Enter height = ");
               scanf("%d",&h);
               c=pi*(r*r)*h;
               printf("\n \t Volume of cylinder is = %f",c);
               break;
        case 2:printf("\n\t Enter radius = ");
               scanf("%d",&r);
               printf("\n\t Enter height = ");
               scanf("%d",&h);
               c=1.0466667*r*r*h;
               printf("\n \t Volume of cone is = %f",c);
               break;
        case 3:printf("\n\t Enter radius = ");
               scanf("%d",&r);
               c=((4/3)*pi*r*r*r);
               printf("\n \t Volume of speare is = %f",c);
               break;
        case 4:printf("\n\t Enter side value = ");
               scanf("%d",&s);
               c=s*s*s;
               printf("\n \t Volume of cube is = %f",c);
               break;
        case 5:exit(0);
        }
    }while(ch!=0);
}
