#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *file;

    int no;
    file = fopen("C:\\Users\\LENOVO\\Desktop\\f1\\filetwo.txt", "w+");
    char name[10];

    if(file == NULL)
        printf("\n\t File not created/opened...");
    else
    {
        printf("\n\t File is created...\n");
        fprintf(file, "Welcome to C file session.\n");
        fprintf(file, "%s", "Thise is a demo file \n");

        printf("\n\t Enter a name value : \t");
        scanf("%s", &name);
        fprintf(file, "%s \n",name);

        printf("\n\t Enter int type data :");
        scanf("%d", &no);
        fprintf(file, "id = %d\n",no);

  fclose(file);    }

    fclose(file);
    return 0;
}
