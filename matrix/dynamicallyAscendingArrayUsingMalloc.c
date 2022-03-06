#include<stdio.h>
int main()
{
    int *ptr,n,i,j,a;

    printf("\n\t Enter How many Elements = ");
    scanf("\n\t %d",&n);
    ptr=(int *)malloc(sizeof(int)*n);
    printf("\n\t Enter Elements = ");
    for(i=0; i<n; i++)
    {
        scanf("\n\t%d",&ptr[i]);
    }

    printf("\n\n\t Entered Elements are = ");
    for(i=0; i<n; i++)
    {
        printf("\n\t %d",ptr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ptr[i]>ptr[j])
            {
                a=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=a;
            }
        }
    }
    printf("\n\n\t sorted Elements in ascending order are = ");
    for(i=0; i<n; i++)
    {
        printf("\n\t %d",ptr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ptr[i]<ptr[j])
            {
                a=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=a;
            }
        }
    }
    printf("\n\n\t sorted Elements in descending order are = ");
    for(i=0; i<n; i++)
    {
        printf("\n\t %d",ptr[i]);
    }
}
