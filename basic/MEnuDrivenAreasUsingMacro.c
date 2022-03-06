#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define area(r) (PI*r*r)
#define rectangle(l,b) (l*b)
#define triangle(b,h) (b*h)
#define side(s) (s*s)

int main(){
    int ch;
    float r,l,b,h,s;

    do{
        printf("\n\t 1 Area of Circle");
        printf("\n\t 2 Area of Rectangle");
        printf("\n\t 3 Area of Triangle");
        printf("\n\t 4 Area of Circle");
        printf("\n\t 5 Exit() ");

        printf("\n\t Enter Choise = ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("\n\t Enter Radius = ");
                scanf("%f",&r);
                printf("\n\t Area is : = %f ",area(r));
                break;
            case 2:
                printf("\n\t Enter Length and breath = ");
                scanf("%f %f",&l,&b);
                printf("\n\t Area of rectangle is : = %f ",rectangle(l,b));
                break;
            case 3:
                printf("\n\t Enter Base and Height = ");
                scanf("%f %f",&b,&h);
                printf("\n\t Area of Triangle is : = %f ",triangle(b,h));
                break;
            case 4:
                printf("\n\t Enter Side Square = ");
                scanf("%f",&s);
                printf("\n\t Side Square is : = %f ",side(s));
                break;
            case 5:
                exit(0);
        }
    }while(ch!=5);
return 0;
}

