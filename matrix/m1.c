#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r1,r2,c1,c2,a[20[20],b[20[20],c[20][20],k,s,ch;
                char con;
                                   do
                                   {
                                       clrscr();
                                       printf(" Enter 1 for Matrix addition\n 2 for Matrix multiplication\n 3 for Transpose of a matrix\n 4 for Sum of diagonals of a matrix");
                                       printf("Enter your choice");
                                       scanf("%d",&ch)
                                       switch(ch)
    {
case 1:
        printf("Enter the order of the first matrix");
        scanf("%d%d",&r1,&c1);
        printf("Enter the order of the second matrix");
        scanf("%d%d",&r2,&c2);
        if(r1==r2&&c1==c2)
        {
            printf("Enter the elements in to the first matrix");
            for(i=0; ifor(j=0; jscanf("%d",&a[i][j]);
                          printf("Enter the elements in to the second matrix");
                          for(i=0; ifor(j=0; jscanf("%d",&b[i][j]);
                                            printf("Entered first matrix");
                                            for(i=0; i
                {
                    for(j=0; j{
                        printf("%d\t",a[i][j]);
                        }
                        printf("\n");
                    }
            printf("Entered second matrix");
            for(i=0; i
        {
            for(j=0; j{
                printf("%d\t",b[i][j]);
                }
                printf("\n");
            }
            for(i=0; i
        {
            for(j=0; j{
                c[i][j]=a[i][j]+b[i][j];
                }
            }
            printf("Sum:\n");
            for(i=0; i
        {
            for(j=0; j{
                printf("%d\t",c[i][j]);
                }
                printf("\n");
            }
        }
        else
            printf("Addition is not possible");
        break;
    case 2:
        printf("Enter the order of the first matrix");
        scanf("%d%d",&r1,&c1);
        printf("Enter the order of the second matrix");
        scanf("%d%d",&r2,&c2);
        if(c1==r2)
        {
            printf("Enter the elements in to the first matrix");
            for(i=0; ifor(j=0; jscanf("%d",&a[i][j]);
                          printf("Enter the elements in to the second matrix");
                          for(i=0; ifor(j=0; jscanf("%d",&b[i][j]);
                                            printf("Entered first matrix");
                                            for(i=0; i
                {
                    for(j=0; j{
                        printf("%d\t",a[i][j]);
                        }
                        printf("\n");
                    }
            printf("Entered second matrix");
            for(i=0; i
        {
            for(j=0; j{
                printf("%d\t",b[i][j]);
                }
                printf("\n");
            }
            printf("Product:\n");
            for(i=0; i
        {
            for(j=0; j{
                c[i][j]==0;
                    for(k=0; k{
                    c[i][j]= c[i][j]+a[i][k]*b[k][j];
                    }
                    printf("%d\t",c[i][j]);
                }
                printf("\n");
            }
        }
        else
            printf("Multiplication is not possible");
        break;
    case 3:
        printf("Enter the order of the matrix");
        scanf("%d%d",&r1,&c1);
        printf("Enter the elements in to the matrix");
        for(i=0; ifor(j=0; jscanf("%d",&a[i][j]);
                      printf("Entered matrix");
                      for(i=0; i
        {
            for(j=0; j{
                printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
        printf("Transpose:\n");
        for(i=0; i
    {
        for(j=0; j{
            printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        break;
    case 4: printf("Enter the order of the matrix");
            scanf("%d%d",&r1,&c1);
            if(r1==c1)
        {
            printf("Enter the elements in to the matrix");
                for(i=0; ifor(j=0; jscanf("%d",&a[i][j]);
                              printf("Entered matrix");
                              for(i=0; i
                {
                    for(j=0; j{
                        printf("%d\t",a[i][j]);
                        }
                        printf("\n");
                    }
                printf("Sum=%d",s);
            }
            else
                printf("Not a square matrix");
                break;
            default: printf("Inavalid choice");
                }
    printf("Do you want to continue(y/n)";
           scanf("%c",&con);
          }
    while(con=='y'||con=='Y');
    getch();
}
