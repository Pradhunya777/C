#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define area(r) (PI*r*r)

int main(){
    float radius;
    printf("\n\t Enter Radius = ");
    scanf("%f",&radius);
    printf("\n\t Area is : = %f ",area(radius));

    return 0;
}
