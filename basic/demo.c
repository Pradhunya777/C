#include <stdio.h>

int *getArray(int *ar);

int main()
{
    int arr1[5];
    int *ptr = getArray(arr1);

    for(int i = 0; i < 5; i++){

        printf(" %d ", *ptr);
        ptr++;
    }

    return 0;
}

int *getArray(int *ar){

    printf("\n\t Enter array elements:");
    for(int i = 0; i < 5; i++){

        scanf("%d", &ar[i]);
    }

    return ar;
}
