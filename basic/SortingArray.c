#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5];
    int i,j,a;
    printf("\n Enter the array elements =");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n\n\t array elements are =");
    for(i=0; i<5; i++)
    {
        printf("\n\t%d",arr[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<7; j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("\n\n\t sorted elements are =");
    for(i=0; i<5; i++)
    {
        printf("\n\t %d",arr[i]);
    }
    return 0;
}

