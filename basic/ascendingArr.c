#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[]= {10,29,5,3,42,7,15};
    int i,j,a;


    for(i=0; i<7; i++)
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
    for(i=0; i<7; i++)
    {
        printf("\n\t %d",arr[i]);
    }
    return 0;
}

