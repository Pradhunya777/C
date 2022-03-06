#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *file1;
    int no;

    char  dataval[50],c;

    file1 = fopen("C:\\Users\\LENOVO\\Desktop\\f1\\filetwo.txt", "r");
    if(file1 == NULL)
    {
        printf("\n\t File NOT opened to read.");
        exit(1);
    }
    printf("\n\t File opened to read..");
    printf("\n\t string data from file is : ");
    while(fscanf(file1, "%s", &dataval)!=EOF)
    {
        printf("%s ",dataval);
    }
    printf("\n\t Int data from file : ");
        fscanf(file1, "%d", &no);
        printf("%d",no);

    fclose(file1);
    return 0;
}

