#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *file;
    FILE *file1;
    int no,fno;
    file = fopen("C:\\Users\\LENOVO\\Desktop\\f1\\fileone.txt", "w+");
    char name[10], dataval[50];

   /* if(file == NULL)
        printf("\n\t File not created/opened...");
    else{
        printf("\n\t File is created...");

        fprintf(file, "Welcome to C file session.\n");

        fprintf(file, "%s", "Hello.111222$$$$\n");


        printf("\n\t Enter a name value : \t");
        scanf("\n %s", &name);

        printf("\n\t Enter int type data :");
        scanf("\n %d", &no);

        fprintf(file, "%d\n", no);
        fprintf(file, "%s", name);


        fclose(file);
    }*/

    file1 = fopen("C:\\Users\\LENOVO\\Desktop\\f1\\fileone.txt", "r");
    if(file1 == NULL)
    {
        printf("\n\t File NOT opened to read.");
    }
    else{
        printf("\n\t File opened to read..");
        no,fscanf(file1, "%d", &fno);

        printf("\n\t Data from file : %d \t", fno);
        fscanf(file1, "%s", &dataval);
        printf("%s", dataval);

        fclose(file1);
    }
    return 0;
}
