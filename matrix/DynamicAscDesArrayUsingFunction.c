#include<stdio.h>
#include<conio.h>

void ascending(int n,int *ptr)
{
    int i,j,a;
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
}

void descending(int n,int *ptr)
{
    int i,j,a;
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
    printf("\n\n\t sorted Elements in ascending order are = ");
    for(i=0; i<n; i++)
    {
        printf("\n\t %d",ptr[i]);
    }
}

int main()
{
    int *ptr,n,i,j;
    printf("\n Enter how namy Elements = ");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int)*n);
    printf("\n Enter Elements = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n Entered elements are =  ");
    for(i=0; i<n; i++)
    {
        printf("\n %d",ptr[i]);
    }
    ascending(n,ptr);
    descending(n,ptr);
    return 0;
}
