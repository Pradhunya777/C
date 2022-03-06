#include<stdio.h>
int main()
{
    int x,y,ch;
    int *a,*b;
    int sum,sub,mul,sq,cube;
    float div,mod;
    printf("\n**************Calcultor Using Pointers************");
    do
    {
        printf("\n 1. Addition");
        printf("\n 2. substraction");
        printf("\n 3. multiplication");
        printf("\n 4. division");
        printf("\n 5. modulus");
        printf("\n 6. square");
        printf("\n 7. cube");
        printf("\n 8. exit");

        printf("\n Enter choise = ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:

            printf("\n enter first number = ");
            scanf("%d",&x);
            printf("\n enter second number = ");
            scanf("%d",&y);
            a=&x;
            b=&y;
            sum=*a+*b;
            printf("\n  Addition is %d",sum);
            break;
        case 2:

            printf("\n enter first number = ");
            scanf("%d",&x);
            printf("\n enter second number = ");
            scanf("%d",&y);
            a=&x;
            b=&y;
            sub=*a-*b;
            printf("\n  Substraction is %d",sub);
            break;
        case 3:

            printf("\n enter first number = ");
            scanf("%d",&x);
            printf("\n enter second number = ");
            scanf("%d",&y);
            a=&x;
            b=&y;
            mul=(*a)*(*b);
            printf("\n  multiplication is %d",mul);
            break;
        case 4:

            printf("\n enter first number = ");
            scanf("%d",&x);
            printf("\n enter second number = ");
            scanf("%d",&y);
            a=&x;
            b=&y;
            div=(*a)/(*b);
            printf("\n division is %f",div);
            break;
        case 5:

            printf("\n enter first number = ");
            scanf("%d",&x);
            printf("\n enter second number = ");
            scanf("%d",&y);
            a=&x;
            b=&y;
            mod=*a%*b;
            printf("\n  modulus is %f",mod);
            break;
        case 6:

            printf("\n enter the number = ");
            scanf("%d",&x);

            a=&x;

            sq=(*a)*(*a);
            printf("\n  square is %d",sq);
            break;
        case 7:

            printf("\n enter the number = ");
            scanf("%d",&x);

            a=&x;

            cube=(*a)*(*a)*(*a);
            printf("\n  cube is %d",cube);
            break;
        case 8:
            exit(0);

        }
    }
    while(ch!=8);

    return 0;
}
