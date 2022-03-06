#include<stdio.h>
#include<conio.h>
int main()
{
    int array[10],i,x,y,total=0;
    float avg=0;
    printf("\n\t Enter array elements ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&array[i]);
        total=total+array[i];
    }
    printf("\n\t Entered array elemente ");
    for(i=0; i<10; i++)
    {
        printf("\n\t the value is %d",array[i]);
    }
    printf("\n\n\t total is %d ",total);
    avg=total/10;
    printf("\n\n\t average is %f",avg);
    printf("\n\n\t even numbers are = ");
    for(i=0; i<10; i++)
    {
        if(array[i]%2==0)
        {
            printf("%d\t",array[i]);
        }
    }

    printf("\n\n\t odd numbers are = ");
    for(i=0; i<10; i++)
    {
        if(array[i]%2!=0)
        {
            printf("%d\t",array[i]);
        }
    }

    return 0;
}
